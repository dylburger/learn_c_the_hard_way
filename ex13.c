#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("ERROR: You need one argument.\n");
        // Abort execution
        return 1;
    }

    // Otherwise, we have an argument and we can move on
    int i;
    char letter;
    // Test condition: as long as we have characters in the string (until we reach the nul-byte)
    for (i = 0, letter = argv[1][0]; argv[1][i] != '\0'; i++) {

        letter = argv[1][i];

        if (letter == 'a' || letter == 'A') {
            printf("%d: 'A'\n", i);
        } else if (letter == 'e' || letter == 'E') {
            printf("%d: 'E'\n", i);
        } else if (letter == 'i' || letter == 'I') {
            printf("%d: 'I'\n", i);
        } else if (letter == 'o' || letter == 'O') {
            printf("%d: 'O'\n", i);
        } else if (letter == 'u' || letter == 'U') {
            printf("%d: 'U'\n", i);
        } else if ((letter == 'y' || letter == 'Y') && i > 2) {
            printf("%d: 'Y'\n", i);
        } else {
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    // Handle the rest of our arguments in argv[], if we have them
    if (argc > 2) {
        for (i = 2; i < argc; i++) {
            printf("arg %d: %s\n", i, argv[i]);
        }
    }

    return 0;
}

