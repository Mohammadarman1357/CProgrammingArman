#include <stdio.h>

// function declaration
void printHW(int count);

int main()
{
    // function call
    printHW(10);
    return 0;
}

// recursive function
void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World \n");
    printHW(count - 1);
}