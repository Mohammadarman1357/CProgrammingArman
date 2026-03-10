#include <stdio.h>
#include <string.h>

int main()
{
    char firstStr[100]="Hello ";    // must be declare size otherwise show error
    char secString[]="World";
    strcat(firstStr,secString);
    puts(firstStr);

    return 0;
}
