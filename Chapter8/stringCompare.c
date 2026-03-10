#include <stdio.h>
#include <string.h>

int main()
{
    // 0 --> equal string
    char firstStr[] = "Apple";
    char secStr[] = "Apple";
    printf("%d \n", strcmp(firstStr, secStr));

    // positive --> first > second
    char firstString[] = "Banana";
    char secString[] = "Apple";
    printf("%d \n", strcmp(firstString, secString));

    // negative --> first < second
    char firstStrs[] = "HHHA";
    char secondStr[] = "HHHB";
    printf("%d \n", strcmp(firstStrs, secondStr));

    return 0;
}
