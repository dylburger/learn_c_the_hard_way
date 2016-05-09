#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    argv[1] = states[0];

    // Starting with argv[1], go through each string in argv
    // We're skipping argv[0] because it's the string that holds the name of the script
    for (i = 1; i < argc; i++) {
        printf("arg %d, %s\n", i, argv[i]);
        if (i > 4) {
            printf("Too many arguments. Breaking!\n");
            break;
        }
    }

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
