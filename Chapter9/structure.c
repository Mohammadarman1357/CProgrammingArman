#include <stdio.h>
#include <string.h>

// user defined
struct student{
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
    strcpy(s1.name,"Arman");

    printf("Student Info: \n");
    printf("Student Name: %s \n",s1.name);
    printf("Student Roll : %d \n",s1.roll);
    printf("Student CGPA : %f \n",s1.cgpa);
    
    return 0;
}
