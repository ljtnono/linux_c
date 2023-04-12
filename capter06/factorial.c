#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int result = 1;
    while ( n > 0 ) {
        result *= n;
        n = n - 1;
    }
    return result;
}

int main(int argc, char *argv[])
{
    printf("factorial(%d)=%d\n", 10, factorial(10));
    return EXIT_SUCCESS;
}
