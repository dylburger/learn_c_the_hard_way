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

        switch(letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
            case 'Y':
                if (i > 2) {
                    // Y is only a vowel if it comes in at least the 3rd position
                    printf("%d: 'Y'\n", i);
                }
                break;

            default:
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

