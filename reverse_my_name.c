#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *name = "Dylan";

    printf("Normal name: %s\n", name);

    // Variables we'll use in our loop
    int c, i, j;

    for (i = 0, j = strlen(name) - 1; i < j; i++, j--) {
        c = name[i];
        name[i] = name[j];
        name[j] = c;
    }

    printf("Reversed name: %s", name);

    return 0;

}
