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

    int i = 0;
    // Index to count the number of elements added to the states array, to make sure we don't add too many
    int j = 0;
    while(i < argc && j < num_states) {
        printf("arg %d: %s\n", i, argv[i]);
        states[i] = argv[i];
        i++;
        // Count the number of times we've added an element of argv to the states array, so we don't add to many
        j++;
    }

    i = 0;
    while (i < num_states) {
        printf("State %d: %s\n", i, states[i]);
        i++;
    }

    // After we've printed the contents of our states array (which now contains arguments from the command line), let's change a single elements of argv[]
    argv[1] = "this_element_has_been_changed";
    while (i < num_states) {
        printf("State: %d: %s\n", i, states[i]);
        i++;
    }

    return 0;

}
