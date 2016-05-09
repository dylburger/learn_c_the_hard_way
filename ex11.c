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
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        states[i] = argv[i];
        i++;
        // We should probably test this condition at the top of the while loop, but we can just as easily
        // add the check here to ensure we don't attempt to copy too many arguments from argv[] to states[]
        if (i >= num_states) {
            printf("Too many arguments - breaking!\n");
            break;
        }
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
