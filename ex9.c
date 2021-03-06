#include <stdio.h>

int main(int argc, char *argv[])
{
    // This is a shortcut in C. If you set one element of the array, it'll fill the rest in with zeros
    // You can confirm by setting the below element to 1 (the rest will be 0's)
    int numbers[4] = {0};
    char *name = "Zed";

    // first, print our numbers out raw
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    /* Here, we only print 'a'. Since this is a char array, and it's filled in with zeros after the 
     * initial 'a', and since 0 is the nul byte in ASCII, we fail to print anything at all (just 
     * a series of three nul bytes */
    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // then print them out initialized
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    printf("Name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name);

    // another way to use name
    // We'll use this way of defining strings moving forward
    char *another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",
            another[0], another[1], 
            another[2], another[3]);

    return 0;
}

