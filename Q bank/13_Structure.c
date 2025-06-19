/********** {"Write a program to initialize and print the elements of an array of structures."} **********/

#include <stdio.h>

struct student {
    int roll;
    char name[15];
    float marks;
};

int main(){
    struct student s[5];

    int i;

    for(i=0; i<5; i++){
        printf("enter student %d roll no : ",i+1);
        scanf("%d",&s[i].roll);
        printf("enter student %d name : ",i+1);
        scanf("%s",&s[i].name);
        printf("enter student %d marks : ",i+1);
        scanf("%f",&s[i].marks);
    }

     for(i=0; i<5; i++){
        printf("\n\nstudent %d roll no : %d ",i+1,s[i].roll);
        printf("\nstudent %d name : %s ",i+1,s[i].name);
        printf("\nstudent %d marks : %f\n",i+1,s[i].marks);
    }
    return 0;
}