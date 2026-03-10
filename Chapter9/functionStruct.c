#include <stdio.h>
#include <string.h>

// user defined
struct student
{
    int roll;
    float cgpa;
    char name[100]
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {687988, 4.00, "Arman"};
    printInfo(s1);

    // s1.roll = 6547; // it will be change

    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Information : \n");

    printf("Student.name : %s \n", s1.name);
    printf("Student.roll : %d \n", s1.roll);
    printf("Student.cgpa : %f \n", s1.cgpa);

    // s1.roll = 6546; // do not change because it is call by value
}