// Check if a given character is present in a string or not
#include <stdio.h>

void checkChar(char str[], char ch);

int main()
{
    char str[] = "ApnaCollege";
    char ch = 'e';
    checkChar(str, ch);
    return 0;
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character is present!");
            return;
        }
    }
    printf("Character is not present!");
}
