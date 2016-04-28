#include <stdio.h>

int main()
{
    int dollars = 10;
    int cents = 4;

    /* Get our money in all pennies */
    int all_cents = (dollars * 100) + cents;

    /* Print our pennies in octal */
    printf("%o\n", all_cents);

    return 0;
}
