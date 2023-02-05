#include <stdio.h>
#include <stdlib.h>

int check(int* a){
    if(!a)
        return -1;
    else
        return 0;
}

int main(void){

    int a = 9;
    int* check_int = &a ;

    printf("%d \n",check(check_int));





    return 0;
}