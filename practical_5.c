/**********{"Design a structure student data to contain name, branch and total percentage obtained.
            Develop a program to read data for 10 students in a class and print them."}*********/

#include<stdio.h>

int main(){


    struct student {
        char name[20];
        char branch[20];
        float pr;
    };

    struct student s[10];

    for(int i=0; i<10; i++){
        printf("\nEnter name of student%d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter branch of student%d: ", i+1);
        scanf("%s", s[i].branch);
        printf("Enter percentage of student%d: ", i+1);
        scanf("%f", &s[i].pr);
    }

    for(int i=0; i<10; i++){
        printf("\nname of student%d : %s ", i+1,s[i].name);
        printf("\nbranch of student%d: %s", i+1,s[i].branch);
        printf("\npercentage of student%d: %f\n ", i+1,s[i].pr);
    }

return 0;
}