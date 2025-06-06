/**********{"Write a C program to demonstrate the concept of dynamic memory allocation."}**********/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr,i;
    ptr = (int*)malloc(3*sizeof(int));

    if (ptr == NULL){
        printf("Memory not allocated");
        return 0;
    }

    for(i=0; i<3; i++){
        printf("enter element no %d : ",i+1);
        scanf("%d",&ptr[i]);
    }

     for(i=0; i<3; i++){
        printf("\nelement no %d is : %d ",i+1,ptr[i]);
    }

    free(ptr);
return 0;
}