#include <stdio.h>

int main()
{
    int dollars = 10;
    int cents = 4;

    /* Prints 10.04, correctly */
    printf("%d.%02d\n", dollars, cents);

    return 0;
}
