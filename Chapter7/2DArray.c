#include <stdio.h>

int main()
{
    // 2 x 3
    int marks[2][3]; // _ _ _ | _ _ _

    marks[0][0] = 99;
    marks[0][1] = 66;
    marks[0][2] = 77;

    marks[1][0] = 54;
    marks[1][1] = 57;
    marks[1][2] = 46;

    printf("%d", marks[0][0]);
    return 0;
}