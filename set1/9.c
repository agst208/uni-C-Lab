#include <stdio.h>

int main() {

    int sec;
    double hr;

    printf("Enter seconds: ");
    scanf("%d", &sec);

    if (sec < 0) printf("Nuber needs to be positive. \n");
    else printf("%d seconds is %.3lf hours \n", sec, sec/360.000);

    return 0;
}   