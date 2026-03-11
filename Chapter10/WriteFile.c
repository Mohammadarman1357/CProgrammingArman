#include <stdio.h>

int main()
{
    FILE *fptr;

    // Writing in a file
    char ch;
    fptr = fopen("NewTest.txt", "w");

    //    fprintf(fptr,"%c",'M');
    //    fprintf(fptr,"%c",'A');
    //    fprintf(fptr,"%c",'N');
    //    fprintf(fptr,"%c",'G');
    //    fprintf(fptr,"%c",'O');

    ch = 'M';
    fprintf(fptr, "%cANGO", ch);

    fclose(fptr);
    return 0;
}
