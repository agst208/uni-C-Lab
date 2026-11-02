#include <stdio.h>
#include "input.h"

int main(void)
{
    double values[2];
    double x, y;

    for (;;) {
        if (!read_doubles("Enter two values: ", values, 2)) {
            return 0;
        }
        x = values[0];
        y = values[1];
        if (y != 0.0) {
            break;
        }
        puts("The second value cannot be zero.");
    }

    printf("%.2lf + %.2lf = %.2lf\n", x, y, x + y);
    printf("%.2lf - %.2lf = %.2lf\n", x, y, x - y);
    printf("%.2lf * %.2lf = %.2lf\n", x, y, x * y);
    printf("%.2lf / %.2lf = %.2lf\n", x, y, x / y);

    return 0;
}
