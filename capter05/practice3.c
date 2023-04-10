#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 使用欧几里得算法（辗转相除法）计算两个整数的最大公约数
int euclid(int a, int b) {
    if (b == 0) {
        return abs(a);
    } else {
        return euclid(b, a % b);
    }
}


int main(int argc, char *argv[])
{
    printf("-12 和 100的最大公约数为：%d\n", euclid(-12, 100));
    return EXIT_SUCCESS;
}
