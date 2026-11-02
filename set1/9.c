#include <stdio.h>

int main() {

    int sec;

    do {
        printf("Enter seconds: ");
        scanf("%d", &sec);
        if (sec < 0) printf("Number needs to be non-negative.\n");
    } while (sec < 0);

    printf("%d seconds is %.3lf hours \n", sec, sec/3600.000);

    return 0;
}   