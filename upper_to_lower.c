#include <stdio.h>

// Convert all uppercase characters to lowercase

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // Abort execution
        return 1;
    }

    // Otherwise, we have an argument and we can move on
    int i = 0;
    // Test condition: as long as we have characters in the string (until we reach the nul-byte)
    for (i = 0; argv[1][i] != '\0'; i++) {

        char letter = argv[1][i];
        
        // If we have an uppercase letter, convert it to lowercase
        if (letter >= 'A' && letter <= 'Z') {
            // Adding 32 to a given character in the range above
            letter = letter + 32;
        } 

        switch(letter) {
            
            case 'a':
                printf("%d: 'a'\n", i);
                break;

            case 'e':
                printf("%d: 'e'\n", i);
                break;

            case 'i':
                printf("%d: 'i'\n", i);
                break;

            case 'o':
                printf("%d: 'o'\n", i);
                break;

            case 'u':
                printf("%d: 'u'\n", i);
                break;

            case 'y':
                if (i > 2) {
                    // Y is only a vowel if it comes in at least the 3rd position
                    printf("%d: 'y'\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);
        } 
    }

    return 0;
}

