#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 4;

    // valid
    a = b + c;

    // invalid
    // b + c = a;

    printf("%d \n", 3 + 2);
    printf("%d \n", 3 - 2);
    printf("%d \n", 3 * 2);
    printf("%d \n", 3 / 2);
    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);

    return 0;
}
