#include <stdio.h>
#include <stdlib.h>

struct complex_struct {
    double x;
    double y;
};

int main(int argc, char *argv[])
{
    struct complex_struct complex;
    complex.x = 3.15;
    complex.y = 3.26;
    printf("complex.x = %f\n", complex.x);
    printf("complex.y = %f\n", complex.y);
    return EXIT_SUCCESS;
}
