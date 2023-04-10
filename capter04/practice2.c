#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = 100, y = 30;
    if (x > 0) {
        printf("Test OK!\n");
    } else if (x <= 0 && y > 0)
        printf("Test OK!\n");
    else
        printf("Test failed!\n");

    if (x > 0 && y <= 0) {
        printf("Test failed!\n");
    } else {
        printf("Test OK.\n");
    }
    return EXIT_SUCCESS;
}
