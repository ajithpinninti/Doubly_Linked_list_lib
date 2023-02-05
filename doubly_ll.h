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

/* Adding data to the created Doubly linked liist*/
int add_data_to_dll(dll_t *dll, void *app_data);

/*return 0 on succes -1 on failure */

int remove_data_from_dll(dll_t *dll, void *data);

/*return 0 if empty. -1 if no empty*/
int is_dll_empty(dll_t *dll);

/*delete all the nodes froma a dll, but do not free the applnn data*/
void drain_dll(dll_t *dll);
