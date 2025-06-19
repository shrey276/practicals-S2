/********** {"What is the difference between passing a structure by value and by reference
to a function?"} **********/


#include <stdio.h>

struct student {
    int roll;
    float marks;
};

// Passing by value
void result(struct student s) {
    s.roll = 10;  // Changes won't affect the original
    s.marks = 91.5;
    printf("\n[Inside result (by value)]\n");
    printf("Roll No : %d\n", s.roll);
    printf("Marks   : %f\n", s.marks);
}

// Passing by reference
void result2(struct student *p) {
    p->roll = 20;  // Changes will affect the original
    p->marks = 88.7;
    printf("\n[Inside result2 (by reference)]\n");
    printf("Roll No : %d\n", p->roll);
    printf("Marks   : %f\n", p->marks);
}

int main() {
    struct student s;
    s.roll = 3;
    s.marks = 98.3;

    printf("[Before calling result()]\n");
    printf("Roll No : %d\n", s.roll);
    printf("Marks   : %f\n", s.marks);

    result(s);  // Pass by value
    printf("\n[After calling result() - original not changed]\n");
    printf("Roll No : %d\n", s.roll);
    printf("Marks   : %f\n", s.marks);

    result2(&s);  // Pass by reference
    printf("\n[After calling result2() - original changed]\n");
    printf("Roll No : %d\n", s.roll);
    printf("Marks   : %f\n", s.marks);

    return 0;
}
