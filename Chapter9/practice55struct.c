// Write a program to store the data of 3 students
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
    struct student s1;

    s1.roll = 687988;
    s1.cgpa = 4.00;
    // s1.name = "Arman";  //not a modifiable value. cannot access directly
    strcpy(s1.name, "Arman");

    printf("Student Info: \n");
    printf("Student Name: %s \n", s1.name);
    printf("Student Roll : %d \n", s1.roll);
    printf("Student CGPA : %f \n", s1.cgpa);

    struct student s2;
    strcpy(s2.name, "Habib");
    s2.roll = 687991;
    s2.cgpa = 4.00;

    printf("Student Info: \n");
    printf("Student Name: %s \n", s2.name);
    printf("Student Roll : %d \n", s2.roll);
    printf("Student CGPA : %f \n", s2.cgpa);

    struct student s3;

    s3.roll = 687988;
    s3.cgpa = 3.99;
    strcpy(s3.name, "Seli");

    printf("Student Info: \n");
    printf("Student Name: %s \n", s3.name);
    printf("Student Roll : %d \n", s3.roll);
    printf("Student CGPA : %f \n", s3.cgpa);

    return 0;
}
