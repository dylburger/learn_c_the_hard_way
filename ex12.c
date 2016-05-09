#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("You only have one argument. Not enough!\n");
    } else if (argc > 1 && argc < 4) {
        printf("Here are your arguments:\n");

        // i will start at 0 and end at one less than argv. We'll increment i a final time, and on the 
        // next iteration of the loop, i will fail to meet the test condition
        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }

        printf("\n");
    }

    return EXIT_SUCCESS;
}
