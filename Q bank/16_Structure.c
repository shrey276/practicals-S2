/********** {"What is a structure pointer in C? How is it different from a regular structure
variable?"} **********/

#include <stdio.h>

struct student {
    int roll;
    float marks;
};

int main(){
    struct student s1;  // regular structure variable
    struct student *s2;  // structure pointer
    s2 = &s1;
    s2->roll = 9;  // initialize using pointer
    s1.marks = 93.6;  // initialize using regular variable
    printf("Roll: %d\n", s1.roll);  
    printf("Marks: %f\n", s2->marks);  //accessing through pointer

    return 0;

}