#include <float.h>
#include <stdio.h>
#include "input.h"

int main(void)
{
    double d;
    double values[1];
    float f;

    for (;;) {
        if (!read_doubles("Enter a value: ", values, 1)) {
            return 0;
        }
        d = values[0];
        if (d >= -FLT_MAX && d <= FLT_MAX) {
            break;
        }
        puts("Value is outside the range that can be represented as a float.");
    }

    f = (float)d;
    printf("d = %.10f\n", d);
    printf("f = %.10f\n", f);

    return 0;
}
