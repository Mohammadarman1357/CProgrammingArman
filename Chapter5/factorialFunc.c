#include <stdio.h>
// function declaration
int factorial(int n);

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("factorial is : %d", factorial(n));
    return 0;
}

// function definition
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int factnm1 = factorial(n - 1);
    int factn = factnm1 * n;

    return factn;
}