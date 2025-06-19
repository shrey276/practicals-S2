/********** {"Write a C program to demonstrate the passing of structures to functions."} **********/

#include <stdio.h>

struct student {
    int roll;
    float result;
};

int display(struct student s) {
    printf("Roll Number: %d\n", s.roll);
    printf("Result: %f\n", s.result);
}

int main(){
    struct student s1 = {9, 90.5};
    display(s1);
}