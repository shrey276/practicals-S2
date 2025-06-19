/*********{"Write a program to demonstrate accessing structure members using both dot
and pointer operators."}**********/

#include <stdio.h>

struct student {
    int roll;
    float marks;
};

int main(){
    struct student s,*p;
    s.roll = 9;
    s.marks = 81.6;
    p = &s;
    printf("Roll number using dot operator: %d\n",s.roll);
    printf("Marks using dot operator: %f\n",s.marks);
    printf("Roll number using pointer operator: %d\n",p->roll);
    printf("Marks using pointer operator: %f\n",p->marks);

    return 0;
}