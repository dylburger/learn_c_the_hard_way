#include <stdio.h>

int main(int argc, char *argv[])
{
    int num = 104;

    printf("This should be a capital D: %c.\n", num);
    // Instead we print out 'h', or 150 in ASCII. Can you go back and forth between int and chars, given that we use 4 bytes to store an int?
    // How can we print the contents of memory used to store 'D' as a char and 104 as an int?

    return 0;
}
