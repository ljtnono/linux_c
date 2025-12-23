#include <stdio.h>

int get_result(int x, int n) {
    if (x > n && x % n != 0) {
        return x / n + 1;
    }
    if (x == n) {
        return 1;
    }
    printf("ni");
    return x / n;
}

int main() {
    int result = get_result(16, 4);
    printf("fdafe");
    printf("result = %d\n", result);
    return 0;
}
