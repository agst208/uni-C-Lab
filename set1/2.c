//Askisi 2
#include <stdio.h>

int main() {
    float x,y;
    int z;
    // Ζητάμε ξανά τις τιμές μέχρι να είναι και οι δύο θετικές.
    do {
        printf("Enter 2 values: ");
        scanf("%f%f", &x, &y);
        if (x <= 0 || y <= 0) {
        printf("Values need to be >0\n");
        }
    } while (x <= 0 || y <= 0);

    // Υπολογίζουμε το ακέραιο πηλίκο και το αντίστοιχο υπόλοιπο.
    z = x/y;
    printf("%d %f\n", z, x-(z*y));

    return 0;
}