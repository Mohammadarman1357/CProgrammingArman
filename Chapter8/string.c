// Create a string firstName and lastName to store details of users
// and print all the characters using a loop.

#include <stdio.h>
void printString(char arr[]);

int main()
{
    // char name[] = {'A','R','M','A','N','\0'};
    // char name[] = "ARMAN";

    char firstName[] = "Arman";
    char lastName[] = "Habib";

    printString(firstName);
    printString(lastName);

    // ask the user to enter their firstname and print it back to them.
    // string input and output
    char firstname[50];
    scanf("%s", firstName);
    printf("your firstname is : %s", firstName);

    // also try this with their fullname.
    char fullName[50];
    scanf("%s", fullName);  // scanf cannot take multi-word input.
    printf("your full name is : %s", fullName);

    // print a string or a paragraph by this.
    // gets, puts, fgets
    char str[100];
    // gets(str); // unsafe
    fgets(str, 100, stdin); // fgets(str, size, stdin);
    puts(str);

    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}