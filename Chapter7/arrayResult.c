#include <stdio.h>

int main()
{
    int marks[3];

    printf("Physics : ");
    scanf("%d", &marks[0]);

    printf("Chemistry : ");
    scanf("%d", &marks[1]);

    printf("Math : ");
    scanf("%d", &marks[2]);

    printf("Physics = %d \n", marks[0]);   // Physics
    printf("Chemistry = %d \n", marks[1]); // Chemistry
    printf("Math = %d \n", marks[2]);      // Math
    return 0;
}