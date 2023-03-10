#include "doubly_ll.h"
#include"stdio.h"
#include "stdlib.h"


/*return 0 on succes -1 on failure */

int remove_data_from_dll(dll_t *dll, void *data){
    dll_node_t* temp;

    temp = dll->head->right;
    free(dll->head);
    if(!dll->head){
        dll->head = temp;
        return 0;
    }
    else{
        return 0;
    }
}

/*return 0 if empty. -1 if no empty*/
int is_dll_empty(dll_t *dll){
    
    if(!dll->head)
        return -1;

    return 0;
}

/*delete all the nodes froma a dll, but do not free the applnn data*/
void drain_dll(dll_t *dll){
    
    return;
}