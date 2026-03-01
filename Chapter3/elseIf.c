#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);

    if (age<12)
    {
        printf("You are Child Shisho");
    }
    else if (age<18)
    {
        printf(("You are teenager Shisho"));
    }
    else{
        printf("Omah! You are Boro Chele! Adult");
    }

    return 0;
}
