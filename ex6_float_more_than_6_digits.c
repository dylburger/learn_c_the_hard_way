#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    // This gets truncated because float isn't precise enough to hold this value (six digits of decimal precision)
    float power = 2.3458734873487348734873847384783748374;
    double super_power = 56789.4532;
    char initial = 'J';
    char first_name[] = "Dylan";
    char last_name[] = "Sather";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n",
            first_name, initial, last_name);

    return 0;
}
