#include <stdio.h>
#include "input.h"

int main(void)
{
    int values[1];
    int deg;
    const double pi = 3.141592653589793;
    double rad;

    if (!read_ints("Enter an angle in degrees: ", values, 1)) {
        return 0;
    }
    deg = values[0];
    rad = deg * (pi / 180.0);
    printf("Angle in radians: %f\n", rad);

    return 0;
}
