#include <stdio.h>
#include <string.h>

// typeDef keyword  --> used to short the name
typedef struct computerEngineeringStudents
{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main()
{
    // coe s1;
    // s1.roll = 45;
    // s1.cgpa = 5.6;
    // strcpy(s1.name,"Arman");

    coe s1 = {67, 5.7, "Arman"};

    printf("Name : %s \n", s1.name);

    return 0;
}
