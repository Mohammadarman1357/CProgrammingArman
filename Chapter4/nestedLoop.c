#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (i = 1; i <= 4; i++)
        {
            for (i = 1; i <= 3; i++)
            {
                printf("Count first 3 value %d \n", i);
            }
        }
    }
    return 0;
}
