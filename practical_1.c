/********** {"C program to print the address of a variable using a pointer."} **********/

#include <stdio.h>

int main (){
    
    int var = 369;
    int *ptr;
    ptr = &var;

    printf("%p",ptr);


    return 0;
}

