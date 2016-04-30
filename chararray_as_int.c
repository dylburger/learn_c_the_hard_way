#include <stdio.h>

int main(int argc, char *argv[])
{
    char arr[] = {'\0', '\0', '1', '1'};

    int test = arr[0] + arr[1] + arr[2] + arr[3];

    printf("Array: %s\n", arr);
    printf("Array as integer: %d\n", test);

    return 0;
}
