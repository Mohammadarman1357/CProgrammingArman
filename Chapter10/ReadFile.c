#include <stdio.h>

int main()
{
    FILE *fptr;

    // Reading a file
    char ch;
    fptr = fopen("Test.txt", "r");

    if (fptr == NULL)
    {
        printf("file doesn't exist \n");
    }
    else
    {
        fscanf(fptr,"%c",&ch);
        printf("Character in file is : %c \n",ch);
        fscanf(fptr,"%c",&ch);
        printf("Character in file is : %c \n",ch);
        fscanf(fptr,"%c",&ch);
        printf("Character in file is : %c \n",ch);
        fscanf(fptr,"%c",&ch);
        printf("Character in file is : %c \n",ch);
        fscanf(fptr,"%c",&ch);
        printf("Character in file is : %c \n",ch);
    }

    fclose(fptr);
    return 0;
}
