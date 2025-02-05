/********** {" Write a C Program which stores the address of pointer variable "} **********/

#include <stdio.h>

int main(){
    int x = 33;
    int *xp = &x;

    printf("address of x is : %p\n",xp);

    int **xpp = &xp;

    printf("address of pointer xp is : %p",xpp);

    return 0; 
}