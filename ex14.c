#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
void print_letters(int len, char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    int len = 0;

    for (i = 0; i < argc; i++) {
        len = strlen(argv[i]);
        print_letters(len, argv[i]);
    }
}

void print_letters(int len, char arg[])
{
    int i = 0;

    // Keep iterating until we encounter a nul byte
    for (i = 0; i < len; i++) {
        char ch = arg[i];

        if (isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    
    return 0;
}
