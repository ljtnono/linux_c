#include <stdio.h>
#include <stdlib.h>

void foo(void) {
    int i;
    printf("%d\n", i);
}

int main(int argc, char *argv[])
{
    foo();
    foo();
    return EXIT_SUCCESS;
}
