#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv, copying the elements to the "states" array of strings
    // Start by initializing an array with a single nul byte
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };
    int num_states = 4;

    int i = argc - 1;
    while(i >= 0) {
        printf("arg %d: %s\n", i, argv[i]);
        states[i] = argv[i];
        i--;
    }

    i = 0;
    while (i < num_states) {
        printf("State %d: %s\n", i, states[i]);
        i++;
    }

    return 0;

}
