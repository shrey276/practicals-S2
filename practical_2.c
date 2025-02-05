/********** {" Write a C program to add the two values using pointers."} **********/

#include <stdio.h>

int main(){

    int a = 33, b = 66, sum;
    int *ap, *bp, *sump;

    printf("enter a first value : ");
    scanf("%d",&a);
    
    printf("enter a second value : ");
    scanf("%d",&b);
    
    ap = &a;
    bp = &b;
    sump = &sum;
    *sump = *ap + *bp;

    printf("sum is : %d",sum);
    
    return 0;
}