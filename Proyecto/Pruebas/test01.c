                     
for_each_string_list_item ( refname , refnames ) { 
if ( get_packed_ref ( refs , refname -> string ) ) { 
needs_repacking = 1 ; 
break ; 
} 
}