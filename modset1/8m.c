#include <limits.h>
#include <stdio.h>
#include "input.h"

int main(void)
{
    double values[2];
    double a, b;
    int q;
    double r;

    for (;;) {
        if (!read_doubles("Enter two numbers: ", values, 2)) {
            return 0;
        }
        a = values[0];
        b = values[1];
        if (a >= 0.0 && b > 0.0 && a / b <= INT_MAX) {
            break;
        }
        puts("Use a non-negative first number, a positive second number, and an int-sized quotient.");
    }

    q = (int)(a / b);
    r = a - b * q;
    printf("Ypoloipo: %f\n", r);

    return 0;
}
