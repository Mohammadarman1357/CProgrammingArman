#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100]
};


int main()
{
    // array
    struct student s1 = {687988, 4.00, "Arman"};
    
    printf("Name : %s \n",s1.name);
    printf("Roll : %d \n",s1.roll);
    printf("CGPA : %f \n",s1.cgpa);

    // pointer
    struct student *ptr = &s1;
    printf("student.roll with ptr : %d \n", (*ptr).roll);
    // arrow opertor
    printf("student->name with arrow : %s \n", ptr->name);
    printf("student->roll with arrow : %d \n", ptr->roll);
    printf("student->cgpa with arrow : %f \n", ptr->cgpa);
    
}