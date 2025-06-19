/********** {"Write a program to demonstrate the use of nested structures in C."} **********/ 

#include <stdio.h>

struct Bday {
    int day;
    int month;
    int year;
};

struct Person {
    int weight;
    float height;
    struct Bday B;
};

int main(){
    struct Person p;
    p.height = 5.9;
    p.B.day = 12;
    p.B.month = 6;
    p.B.year = 2005;
    printf("Age: %d\n", 2025-p.B.year);
    printf("Height: %f\n", p.height);
    printf("Birthday: %d/%d/%d\n", p.B.day, p.B.month, p.B.year);
}