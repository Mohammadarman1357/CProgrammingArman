#include <stdio.h>

int main()
{
    // true --> 1
    // false --> 0
    
    printf("%d \n", 4<5 && 5<6);
    printf("%d \n", 4<5 && 6<5);

    printf("%d \n", 4<5 && 6<5);
    printf("%d \n", 5>4 && 6>5);
    printf("%d \n", 6>5 && 6<5);

    printf("%d \n", 6>5 || 6<5);

    printf("%d \n", !(5<6 && 4<5));
    printf("%d \n", !(5>6 || 7>5));

    return 0;
}
