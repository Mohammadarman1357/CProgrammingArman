#include <stdio.h>

int main()
{
    // for loops
    for (int i = 1; i <= 100; i++)
    {
        printf("%d \n", i);
    }

    // while loops
    int i = 1;
    while (i <= 100)
    {
        printf("%d \n", i);
        i++;
    }

    // do while loops
    i = 1;
    do {
        printf("%d \n", i);
        i++;
    } while (i <= 100);

    return 0;
}
