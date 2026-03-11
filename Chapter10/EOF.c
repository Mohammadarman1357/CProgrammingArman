#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;

    // Reading in a file
    fptr = fopen("Test.txt", "r");

    ch = fgetc(fptr);
    
    // EOF --> End of File
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}
