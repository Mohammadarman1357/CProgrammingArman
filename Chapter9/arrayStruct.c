#include <stdio.h>
#include <string.h>

// user defined
struct student
{
    char name[100];
    int roll;
    float cgpa;
};


int main()
{
    struct student ece[100];
    ece[0].roll = 687988;
    ece[0].cgpa = 4.00;
    strcpy(ece[0].name,"Arman");

    printf("Name : %s \n",ece[0].name);
    printf("Roll : %d \n",ece[0].roll);
    printf("CGPA : %f \n",ece[0].cgpa);
}