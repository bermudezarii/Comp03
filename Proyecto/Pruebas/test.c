__extension__ unsigned long long int __total_seq ; 
__extension__ unsigned long long int __wakeup_seq ; 
__extension__ unsigned long long int __woken_seq ; 
struct 
{ 
int __lock ; 
unsigned int __futex ; 
__extension__ unsigned long long int __total_seq ; 
__extension__ unsigned long long int __wakeup_seq ; 
__extension__ unsigned long long int __woken_seq ; 
void * __mutex ; 
unsigned int __nwaiters ; 
unsigned int __broadcast_seq ; 
} __data ;