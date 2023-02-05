#include <stdio.h>


/*Header for Doubly Linked list*/

typedef struct doubly_node
{
    void *data;
    struct doubly_node *left;
    struct doubly_node *right;
}dll_node_t;

typedef struct dll_
{
    dll_node_t *head;
}dll_t;

/*Public Function declaration to create and
return a new empty doubly linked list*/

dll_t *get_new_dll();
int add_data_to_dll(dll_t *dll, void *app_data);