// Enter address (house no, block, city, state ) of 5 people.
#include <stdio.h>
#include <string.h>

// user defined
struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdrs(struct address adrs);

int main()
{
    struct address adrs[5];
    // input
    printf("Enter info for person 1 :\n");
    scanf("%d", &adrs[0].houseNo);
    scanf("%d", &adrs[0].block);
    scanf("%s", &adrs[0].city);
    scanf("%s", &adrs[0].state);

    printf("Enter info for person 2 :\n");
    scanf("%d", &adrs[1].houseNo);
    scanf("%d", &adrs[1].block);
    scanf("%s", &adrs[1].city);
    scanf("%s", &adrs[1].state);

    printf("Enter info for person 3 :\n");
    scanf("%d", &adrs[2].houseNo);
    scanf("%d", &adrs[2].block);
    scanf("%s", &adrs[2].city);
    scanf("%s", &adrs[2].state);

    printf("Enter info for person 4 :\n");
    scanf("%d", &adrs[3].houseNo);
    scanf("%d", &adrs[3].block);
    scanf("%s", &adrs[3].city);
    scanf("%s", &adrs[3].state);

    printf("Enter info for person 5 :\n");
    scanf("%d", &adrs[4].houseNo);
    scanf("%d", &adrs[4].block);
    scanf("%s", &adrs[4].city);
    scanf("%s", &adrs[4].state);

    printAdrs(adrs[0]);
    printAdrs(adrs[1]);
    printAdrs(adrs[2]);
    printAdrs(adrs[3]);
    printAdrs(adrs[4]);

    return 0;
};

void printAdrs(struct address adrs)
{
    printf("Address is : %d %d %s %s \n", adrs.houseNo, adrs.block, adrs.city, adrs.state);
}
