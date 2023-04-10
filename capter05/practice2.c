#include <stdlib.h>
#include <stdio.h>
#include <math.h>


double myround(double x) {
    // 实现四舍五入
    if (x > 0.0) {
       double dot = x - floor(x);
       if (dot > 0.5) {
           return floor(x) + 1;
       } else {
           return floor(x);
       }
    } else {
        double dot = ceil(x) - x;
        if (dot > 0.5) {
            return ceil(x) - 1;
        } else {
            return ceil(x);
        }
    }
}

int main(int argc, char *argv[])
{
    printf("myround(%.2f) is %.2f\n", 4.49, myround(4.49));
    return EXIT_SUCCESS;
}
