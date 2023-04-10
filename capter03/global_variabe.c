#include<stdio.h>
#include<stdlib.h>

int hour = 23, minute = 59;

void print_time(void) {
    printf("%d:%d in print_time\n", hour, minute);
}

int main(int argc, char *argv[])
{
    print_time();
    printf("%d:%d in main\n", hour, minute);
    return EXIT_SUCCESS;
}
