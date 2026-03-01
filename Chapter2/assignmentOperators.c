#include <stdio.h>

int main()
{
    int a = 10;
    a+=10;  // a = a+10;  
    printf("a+=10 is : %d \n", a);
    a-=10;
    printf("a-=10 is : %d \n", a);
    a*=10;
    printf("a*=10 is : %d \n", a);
    a/=10;
    printf("a/=10 is : %d \n", a);
    a%=10;
    printf("a%=10 is : %d \n", a);
    return 0;
}
