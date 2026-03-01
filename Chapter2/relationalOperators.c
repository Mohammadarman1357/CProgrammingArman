#include <stdio.h>

int main()
{
    // true --> 1
    // false --> 0
    
    printf("%d \n", 4==4);

    printf("%d \n", 4>3);
    printf("%d \n", 3>4);
    printf("%d \n", 4>=3);
    printf("%d \n", 3>=4);
    
    printf("%d \n", 4<3);
    printf("%d \n", 3<4);
    printf("%d \n", 4<=3);
    printf("%d \n", 3<=4);

    printf("%d \n", 4!=3);
    printf("%d \n", 4!=4);

    return 0;
}
