#include <stdio.h>
// function to calculate a square of a number
// function declare
int calCSquare(int n);

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    // function call
    printf("Square is : %d", calCSquare(n));
    return 0;
}

// function definition
int calCSquare(int n)
{
    return n * n;
}