#include<stdio.h>

int main()
{
    // string pointer can be change
    char *canChange = "Hello Duniya";
    puts(canChange);
    canChange = "Hello"; // can be change 
    puts(canChange);

    // string array cannot be change
    char cannotChange[]="Hello Duniya";
    puts(cannotChange);
    // cannotChange="Hello"; cannot be change

    return 0;
}
