#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main(int argc, char *argv[])
{
    bool leapYear = is_leap_year(21);
    printf("%d is leap year or is not leap year %d\n", 21, leapYear);
    return EXIT_SUCCESS;
}
