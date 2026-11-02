#include <stdio.h>
#include "input.h"

int main(void)
{
    int values[1];
    int sec;

    for (;;) {
        if (!read_ints("Enter seconds: ", values, 1)) {
            return 0;
        }
        sec = values[0];
        if (sec >= 0) {
            break;
        }
        puts("Number needs to be non-negative.");
    }

    printf("%d seconds is %.3f hours\n", sec, sec / 3600.0);
    return 0;
}
