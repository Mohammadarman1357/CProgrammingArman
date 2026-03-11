#include <stdio.h>

int main()
{
    FILE *fptr;

    // Writing in a file
    char ch;
    fptr = fopen("Test.txt", "w");

    // fputc
    fputc('M',fptr);    // M
    fputc('A',fptr);    // A
    fputc('N',fptr);    // N
    fputc('G',fptr);    // G
    fputc('O',fptr);    // O


    fclose(fptr);
    return 0;
}
