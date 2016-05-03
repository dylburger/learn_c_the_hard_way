#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *name = "Dylan";
    int name_size = (int)strlen(name);
    printf("Length of name: %d\n", name_size);

    // Instantiate a new array of 6 bytes (Dylan + null byte) with all zeros
    char new_name[6] = {"\0"};

    printf("Normal name: %s\n", name);

    // Variables we'll use in our loop
    int i, j;

    for (i = 0, j = strlen(name) - 1; i < name_size; i++, j--) {
        new_name[i] = name[j];
    }

    printf("Reversed name: %s\n", new_name);

    return 0;

}
