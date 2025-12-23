#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        int recure = factorial(n - 1);
        int result = n * recure;
        return result;
    }
}

int main(int argc, char *argv[]) {
    printf("%d!=%d\n", 10, factorial(10));
    return EXIT_SUCCESS;
}
