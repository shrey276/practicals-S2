/*********{"What happens if you try to access a structure member that is not initialized?"}**********/

#include<stdio.h>

struct person{
    int age;
    char name[20];
    float height;
};

int main(){

    struct person p1; 

    printf("age : %d",p1.age);   // access uninitialized member
    printf("\nname : %s",p1.name);  // access uninitialized member
    printf("\nheight : %f",p1.height);   // access uninitialized member

    return 0;
}