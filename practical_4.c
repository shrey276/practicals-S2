/**********{"Define a structure type struct personal that would contain person name, Date of birth and age using
            this structure to read this information of 4 people and display the same."} **********/

#include <stdio.h>

int main ()
{
    struct DOB{
        int day;
        int month;
        int year;
    };

    struct personal{
        char name[20];
        struct DOB dob;
    };

    struct personal p[4];
    
    for (int i=0; i<4; i++){
        printf("\n person %d name : ",i+1);
        scanf("%s",&p[i].name);
        printf("person %d date of birth(dd mm yyyy) : ",i+1);
        scanf("%d %d %d",&p[i].dob.day,&p[i].dob.month,&p[i].dob.year);
    }
    
     for (int i=0; i<4; i++){
        printf("\n person %d name : %s",i+1,p[i].name);
        printf("\n person %d date of birth(dd mm yyyy) : %d %d %d",i+1,p[i].dob.day,p[i].dob.month,p[i].dob.year);
        printf("\n person %d age : %d",i+1,2025-p[i].dob.year);
    }

    return 0;
}