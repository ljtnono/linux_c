#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[])
{
    printf("fib(%d) = %d\n", 2, fib(2));
    return EXIT_SUCCESS;
}
