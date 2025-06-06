/**********{"A file named “New” contains a series of integer numbers. Write a c program to read all
            numbers from a file and then copy all odd numbers into a file named “odd” and write all
            even numbers into a file named “even”. Then display the values of files odd and even on
            the screen."}**********/

#include <stdio.h>

int main() {
    FILE *fp, *odd, *even;
    int num;

    fp = fopen("New", "r");
    if (fp == NULL) {
        printf("Cannot open file New\n");
        return 1;
    }

    odd = fopen("odd", "w");
    even = fopen("even", "w");

    while (fscanf(fp, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(even, "%d\n", num);
        else
            fprintf(odd, "%d\n", num);
    }

    fclose(fp);
    fclose(odd);
    fclose(even);

    printf("Odd numbers:\n");
    odd = fopen("odd", "r");
    while (fscanf(odd, "%d", &num) != EOF) {
        printf("%d ", num);
    }
    printf("\n");
    fclose(odd);

    printf("Even numbers:\n");
    even = fopen("even", "r");
    while (fscanf(even, "%d", &num) != EOF) {
        printf("%d ", num);
    }
    printf("\n");
    fclose(even);

    return 0;
}
