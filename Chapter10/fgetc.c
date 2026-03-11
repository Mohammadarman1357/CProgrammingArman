#include <stdio.h>

int main()
{
    FILE *fptr;

    // Reading in a file
    char ch;
    fptr = fopen("Test.txt", "r");

    // fgetc
    printf("%c \n", fgetc(fptr));   // A
    printf("%c \n", fgetc(fptr));   // p
    printf("%c \n", fgetc(fptr));   // p
    printf("%c \n", fgetc(fptr));   // l
    printf("%c \n", fgetc(fptr));   // e

    fclose(fptr);
    return 0;
}
