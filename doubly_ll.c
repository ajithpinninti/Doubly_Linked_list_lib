#include "doubly_ll.h"
#include <stdlib.h>
#include <memory.h>

/* Function to create and return
 * new empty doubly linked list */

dll_t *get_new_dll(){
    dll_t* dll = calloc(1,sizeof(dll_t));
    dll->head = NULL;
    return dll;
}

int add_data_to_dll(dll_t *dll, void *app_data){

    if( !dll || !app_data)
        return -1;
    
    dll_node_t *new_node = calloc(1,sizeof(dll_node_t));
    new_node->data = app_data;
    new_node->left = NULL;
    new_node ->right = NULL;

    if(!dll->head){
        dll->head = new_node;
        return 0;
    }

    dll_node_t *first_node = dll->head;
    new_node -> right = first_node;
    first_node -> left = new_node;
    dll->head = new_node;
    return 0;

}




