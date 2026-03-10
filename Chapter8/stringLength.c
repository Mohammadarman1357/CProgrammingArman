// Make a program that inputs user's name and prints its length.
#include <stdio.h>
#include <string.h>

int countLength(char arr[]);

int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is : %d",countLength(name));

    // strlen(str) --> function
    char name[] = "Arman";
    int length = strlen(name);
    printf("Length is : %d",length);

    return 0;
}

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}