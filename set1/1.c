//Askisi 1
#include <stdio.h>

int main() {
    double x,y;
    printf("Enter two values: ");
    // Διαβάζουμε δύο τιμές
    scanf("%lf%lf", &x, &y);
    // Υπολογίζουμε και εμφανίζουμε τις πράξεις
    printf("%.2lf + %.2lf = %.2lf\n", x, y, x+y);
    printf("%.2lf - %.2lf = %.2lf\n", x, y, x-y);
    printf("%.2lf * %.2lf = %.2lf\n", x, y, x*y);
    printf("%.2lf / %.2lf = %.2lf\n", x, y, x/y);

    return 0;

}