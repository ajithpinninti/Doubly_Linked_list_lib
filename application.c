#include "doubly_ll.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct  stud
{
    /* data */
    char name[30];
    int age;
    char gender[40];
} student_t;

void print_data(student_t *data){
    printf("\n");
    printf("name of the student: %s \n",data->name);
    printf("age of the studnet: %d \n",data->age);
    printf("gender of the studnet: %s \n",data->gender);
    printf("\n");
}

void print_dll_db(dll_t*dll){

    dll_node_t *head =NULL;
    head = dll->head;
    student_t *data = NULL;
    
    while(head){
        data = head->data;
        print_data(data);
        head = head->right;
        
    }


    return;
}

int main(void){

    student_t *student_1 = calloc(1,sizeof(student_t));
    strncpy( student_1->name,"Ajith",strlen("Ajith"));
    student_1->age = 30;
    strncpy(student_1->gender ,"male",strlen("male"));

    student_t *student_2 = calloc(1,sizeof(student_t));
    strncpy(student_2 ->name,"Vanitha",strlen("Vanitha"));
    student_2 ->age = 30;
    strncpy(student_2->gender ,"Female",strlen("Female"));

    student_t *student_3 = calloc(1,sizeof(student_t));
    strncpy(student_3 -> name,"Kavya",strlen("kavya"));
    student_3->age = 30;
    strncpy(student_3->gender,"Female",sizeof("Female"));

    dll_t* dll1 = get_new_dll();
    add_data_to_dll(dll1,student_1);
    add_data_to_dll(dll1,student_2);
    add_data_to_dll(dll1,student_3);

    print_dll_db(dll1);

    return 0;
}