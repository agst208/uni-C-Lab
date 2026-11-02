#include <limits.h>
#include <stdio.h>
#include "input.h"

int main(void)
{
    float values[2];
    float x, y;
    int z;

    for (;;) {
        if (!read_floats("Enter 2 values: ", values, 2)) {
            return 0;
        }
        x = values[0];
        y = values[1];
        if (x > 0.0f && y > 0.0f && (double)x / y <= INT_MAX) {
            break;
        }
        puts("Values need to be >0, with a quotient that fits in an int.");
    }

    z = (int)(x / y);
    printf("%d %f\n", z, x - (z * y));

    return 0;
}
