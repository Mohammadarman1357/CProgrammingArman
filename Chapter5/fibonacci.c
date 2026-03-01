#include <stdio.h>

int fib(int n);

int main()
{
    printf("%d", fib(4));
    return 0;
}

// recursive function
int fib(int n)
{
    // base condition || base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;

    // printf("fib of %d is : %d", n, fib);

    return fibN;
}