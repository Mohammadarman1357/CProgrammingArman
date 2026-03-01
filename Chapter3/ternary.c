#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d", &age);

    (age > 18) ? printf("Omah! Powa to ekon boro hoye gece! Adult") : printf("Chele ekono Shisho");

    int number = 7;
    int luckyNumber = 7;

    number == luckyNumber ? printf("Olee! You are Lucky") : printf("Olee! You are Lucky");

    return 0;
}