// Make a structure to store Bank Account information of a
// customer of Bank. Also make an alias for it.

#include <stdio.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Arman"};
    acc acc2 = {234, "Habib"};
    acc acc3 = {456, "Seli"};

    printf("Account No : %d \n", acc1.accountNo);
    printf("Account Name : %s \n", acc1.name);
    
    return 0;
}
