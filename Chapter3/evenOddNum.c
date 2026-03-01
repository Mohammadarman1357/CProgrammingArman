#include <stdio.h>

int main()
{
    int number;
    
    // scanf("Enter your Number : %d", &number);  --> it's wrong way. you have to take direct input

    printf("Enter your Number :");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}
