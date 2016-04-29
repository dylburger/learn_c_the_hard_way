#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n",
            bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 500L * 10000000000L;
    // Print as a long decimal
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    // This number is so small that we'll have to print it using scientific notation
    printf("That is only %e portion of the universe.\n", part_of_universe);

    // This makes no sense, just a demo of something weird
    char nul_byte = '\0';
    // Here, a character is just an integer, so we're multiplying our number of bugs by a character (in this case, the null byte, which gets represented as 0)
    int care_percentage = bugs * nul_byte;
    // The double percent will allow you to print a percent character (a percent escaped with a percent)
    printf("Which means you should care %d%%.\n", care_percentage);

    return 0;
}
