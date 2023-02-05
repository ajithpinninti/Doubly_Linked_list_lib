#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(int* a){
    if(!a)
        return -1;
    else
        return 0;
}

int main(void){

    char str[] = "HIII" ;

    strcpy(str,"AAA");

    printf("%s \n",str);





    return 0;
}