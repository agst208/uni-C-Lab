#include <stdio.h>
#include "input.h"

int main(void)
{
    int values[1];
    int x, sum;

    for (;;) {
        if (!read_ints("Enter a 3-digit number: ", values, 1)) {
            return 0;
        }
        x = values[0];
        if (x >= 100 && x < 1000) {
            break;
        }
        puts("Number needs to be 3-digit and positive.");
    }

    sum = x / 100 + (x / 10) % 10 + x % 10;
    printf("%d\n", sum);

    return 0;
}
