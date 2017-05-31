












static char * user_format ; 
static struct cmt_fmt_map { 
const char * name ; 
enum cmit_fmt format ; 
int is_tformat ; 
int expand_tabs_in_log ; 
int is_alias ; 
const char * user_format ; 
} * commit_formats ; 
static size_t builtin_formats_len ; 
static size_t commit_formats_len ; 
static size_t commit_formats_alloc ; 
static struct cmt_fmt_map * find_commit_format ( const char * sought ) ; 
int commit_format_is_empty ( enum cmit_fmt fmt ) 
{ 
return fmt == CMIT_FMT_USERFORMAT && ! * user_format ; 
} 
static void save_user_format ( struct rev_info * rev , const char * cp , int is_tformat ) 
{ 
free ( user_format ) ; 
user_format = xstrdup ( cp ) ; 
if ( is_tformat ) 
rev -> use_terminator = 1 ; 
rev -> commit_format = CMIT_FMT_USERFORMAT ; 
} 
static int git_pretty_formats_config ( const char * var , const char * value , void * cb ) 
{ 
struct cmt_fmt_map * commit_format = NULL ; 
const char * name ; 
const char * fmt ; 
int i ; 
if ( ! skip_prefix ( var , "pretty." , & name ) ) 
return 0 ; 
for ( i = 0 ; i < builtin_formats_len i ++ ) { 
if ( ! strcmp ( commit_formats [ i ] . name , name ) ) 
return 0 ; 
} 
for ( i = builtin_formats_len ; i < commit_formats_len ; i ++ ) { 
if ( ! strcmp ( commit_formats [ i ] . name , name ) ) { 
commit_format = & commit_formats [ i ] ; 
break ; 
} 
} 
if ( ! commit_format ) { 
ALLOC_GROW ( commit_formats , commit_formats_len + 1 , 
commit_formats_alloc ) ; 
commit_format = & commit_formats [ commit_formats_len ] ; 
memset ( commit_format , 0 , sizeof ( * commit_format ) ) ; 
commit_formats_len ++ ; 
} 
commit_format -> name = xstrdup ( name ) ; 
commit_format -> format = CMIT_FMT_USERFORMAT ; 
if ( git_config_string ( & fmt , var , value ) ) 
return - 1 ; 
if ( skip_prefix ( fmt , "format:" , & fmt ) ) 
commit_format -> is_tformat = 0 ; 
else if ( skip_prefix ( fmt , "tformat:" , & fmt ) || strchr ( fmt , '%' ) ) 
commit_format -> is_tformat = 1 ; 
else 
commit_format -> is_alias = 1 ; 
commit_format -> user_format = fmt ; 
return 0 ; 
} 
static void setup_commit_formats ( void ) 
{ 
struct cmt_fmt_map builtin_formats [ ] = { 
{ "raw" , CMIT_FMT_RAW , 0 , 0 } , 
{ "medium" , CMIT_FMT_MEDIUM , 0 , 8 } , 
{ "short" , CMIT_FMT_SHORT , 0 , 0 } , 
{ "email" , CMIT_FMT_EMAIL , 0 , 0 } , 
{ "mboxrd" , CMIT_FMT_MBOXRD , 0 , 0 } , 
{ "fuller" , CMIT_FMT_FULLER , 0 , 8 } , 
{ "full" , CMIT_FMT_FULL , 0 , 8 } , 
{ "oneline" , CMIT_FMT_ONELINE , 1 , 0 } 
} ; 
commit_formats_len = ARRAY_SIZE ( builtin_formats ) ; 
builtin_formats_len = commit_formats_len ; 
ALLOC_GROW ( commit_formats , commit_formats_len , commit_formats_alloc ) ; 
memcpy ( commit_formats , builtin_formats , 
sizeof ( * builtin_formats ) * ARRAY_SIZE ( builtin_formats ) ) ; 
git_config ( git_pretty_formats_config , NULL ) ; 
} 
static struct cmt_fmt_map * find_commit_format_recursive ( const char * sought , 
const char * original , 
int num_redirections ) 
{ 
struct cmt_fmt_map * found = NULL ; 
size_t found_match_len = 0 ; 
int i ; 
if ( num_redirections >= commit_formats_len ) 
die ( "invalid --pretty format: " 
"'%s' references an alias which points to itself" , 
original ) ; 
for ( i = 0 ; i < commit_formats_len ; i ++ ) { 
size_t match_len ; 
if ( ! starts_with ( commit_formats [ i ] name , sought ) ) 
continue ; 
match_len = strlen ( commit_formats [ i ] . name ) ; 
if ( found == NULL || found_match_len > match_len ) { 
found = & commit_formats [ i ] ; 
found_match_len = match_len ; 
} 
} 
if ( found && found -> is_alias ) { 
found = find_commit_format_recursive ( found -> user_format , 
original , 
num_redirections + 1 ) ; 
} 
return found ; 
} 
static struct cmt_fmt_map * find_commit_format ( const char * sought ) 
{ 
if ( ! commit_formats ) 
setup_commit_formats ( ) ; 
return find_commit_format_recursive ( sought , sought , 0 ) ; 
} 
void get_commit_format ( const char * arg , struct rev_info * rev ) 
{ 
struct cmt_fmt_map * commit_format ; 
rev -> use_terminator = 0 ; 
if ( ! arg ) { 
rev -> commit_format = CMIT_FMT_DEFAULT ; 
return ; 
} 
if ( skip_prefix ( arg "format:" , & arg ) ) { 
save_user_format ( rev , arg , 0 ) ; 
return ; 
} 
if ( ! * arg || skip_prefix ( arg , "tformat:" , & arg ) || strchr ( arg , '%' ) ) { 
save_user_format ( rev , arg , 1 ) ; 
return ; 
} 
commit_format = find_commit_format ( arg ) ; 
if ( ! commit_format ) 
die ( "invalid --pretty format: %s" , arg ) ; 
rev -> commit_format = commit_format -> format ; 
rev -> use_terminator = commit_format -> is_tformat ; 
rev -> expand_tabs_in_log_default = commit_format -> expand_tabs_in_log ; 
if ( commit_format -> format == CMIT_FMT_USERFORMAT ) { 
save_user_format ( rev , commit_format -> user_format , 
commit_format -> is_tformat ) ; 
} 
} 
static int get_one_line ( const char * msg ) 
{ 
int ret = 0 ; 
for ( ; ; ) { 
char c = * msg ++ ; 
if ( ! c ) 
break ; 
ret ++ ; 
if ( c == '\n' ) 
break ; 
} 
return ret ; 
} 
static int non_ascii ( int ch ) 
{ 
return ! isascii ( ch ) || ch == '\033' ; 
} 
int has_non_ascii ( const char * s ) 
{ 
int ch ; 
if ( ! s ) 
return 0 ; 
while ( ( ch = * s ++ ) != '\0' ) { 
if ( non_ascii ( ch ) ) 
return 1 ; 
} 
return 0 ; 
} 
static int is_rfc822_special ( char ch ) 
{ 
switch ( ch ) { 
case '(' : 
case ')' : 
case '<' : 
case '>' : 
case '[' : 
case ']' : 
case ':' : 
case ';' : 
case '@' : 
case ',' : 
case '.' : 
case '"' : 
case '\\' : 
return 1 ; 
default : 
return 0 ; 
} 
} 
static int needs_rfc822_quoting ( const char * s , int len ) 
{ 
int i ; 
for ( i = 0 ; i < len ; i ++ ) 
if ( is_rfc822_special ( s [ i ] ) ) 
return 1 ; 
return 0 ; 
} 
static int last_line_length ( struct strbuf * sb ) 
{ 
int i ; 
for ( i = sb -> len - 1 ; i >= 0 ; i -- ) 
if ( sb -> buf [ i ] == '\n' ) 
break ; 
return sb -> len - ( i + 1 ) ; 
} 
static void add_rfc822_quoted ( struct strbuf * out , const char * s , int len ) 
{ 
int i ; 
strbuf_grow ( out , len + 2 ) ; 
strbuf_addch ( out , '"' ) ; 
for ( i = 0 ; i < len ; i ++ ) { 
switch ( s [ i ] ) { 
case '"' : 
case '\\' : 
strbuf_addch ( out , '\\' ) ; 
default : 
strbuf_addch ( out , s [ i ] ) ; 
} 
} 
strbuf_addch ( out , '"' ) ; 
} 
enum rfc2047_type { 
RFC2047_SUBJECT , 
RFC2047_ADDRESS 
} ; 
static int is_rfc2047_special ( char ch , enum rfc2047_type type ) 
{ 
if ( non_ascii ( ch ) || ! isprint ( ch ) ) 
return 1 ; 
if ( isspace ( ch ) || ch == '=' || ch == '?' || ch == '_' ) 
return 1 ; 
if ( type != RFC2047_ADDRESS ) 
return 0 ; 
return ! ( isalnum ( ch ) || ch == '!' || ch == '*' || ch == '+' || ch == '-' || ch == '/' ) ; 
} 
static int needs_rfc2047_encoding ( const char * line , int len , 
enum rfc2047_type type ) 
{ 
int i ; 
for ( i = 0 ; i < len ; i ++ ) { 
int ch = line [ i ] ; 
if ( non_ascii ( ch ) || ch == '\n' ) 
return 1 ; 
if ( ( i + 1 < len ) && ( ch == '=' && line [ i + 1 ] == '?' ) ) 
return 1 ; 
} 
return 0 ; 
} 
static void add_rfc2047 ( struct strbuf * sb , const char * line , size_t len , 