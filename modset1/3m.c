#include <stdio.h>
#include "input.h"

int main(void)
{
    int values[2];
    int x, y, t;

    for (;;) {
        if (!read_ints("Enter two 3-digit numbers: ", values, 2)) {
            return 0;
        }
        x = values[0];
        y = values[1];
        if (x > 99 && x < 1000 && y > 99 && y < 1000) {
            break;
        }
        puts("Numbers need to be 3-digit and positive.");
    }

    t = y;
    y = (y / 10) * 10 + x / 100;
    x = (x - (x / 100) * 100) + (t - (t / 10) * 10) * 100;

    printf("%d %d\n", x, y);
    return 0;
}
