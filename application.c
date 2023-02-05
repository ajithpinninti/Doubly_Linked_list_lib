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

void print_dll(dll_t*dll){



    return;
}

int main(void){

    student_t *student_1 = calloc(1,sizeof(student_t));
    strcnpy( student_1->name,"Ajith",strlen("Ajith"));
    student_1->age = 30;
    strncpy(student_1->gender ,"male",strlen("male"));

    student_t *studnet_2 = calloc(1,sizeof(studnet_2));
    strncpy(student_1->name,"Vanitha",strlen("Vanitha"));
    student_1->age = 30;
    strncpy(student_1->gender ,"Female",strlen("Female"));

    student_t *student_3 = calloc(1,sizeof(student_t));
    strncpy(student_3 -> name,"Kavya",strlen("kavya"));
    student_3->age = 30;
    strncpy(student_3->gender,"Female",sizeof("Female"));

    dll_t* dll1 = get_new_dll();
    add_data_to_dll(dll1,student_1);
    add_data_to_dll(dll1,studnet_2);
    add_data_to_dll(dll1,student_3);

    print_db(dll1);

    return 0;
}