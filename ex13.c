#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // Abort execution
        return 1;
    }

    // Otherwise, we have an argument and we can move on
    int i = 0;

    // Use a pointer to point to our string, using pointer arithmetic to move
    // through it
    char *char_ptr = argv[1];

    // Test condition: as long as we have characters in the string (until we reach the nul-byte)
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = char_ptr[i];

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

    return 0;
}

