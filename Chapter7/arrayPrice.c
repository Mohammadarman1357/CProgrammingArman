#include <stdio.h>
// write a program to enter price of 3 items and
// print their final cost with gst (18%)

int main()
{
    float price[3];

    printf("Enter Price 1 : ");
    scanf("%f", &price[0]);

    printf("Enter Price 2 : ");
    scanf("%f", &price[1]);

    printf("Enter Price 3 : ");
    scanf("%f", &price[2]);

    printf("Total Price 1 = %f \n", price[0] + (0.18 * price[0]));
    printf("Total Price 2 = %f \n", price[1] + (0.18 * price[1]));
    printf("Total Price 3 = %f \n", price[2] + (0.18 * price[2]));

    return 0;
}