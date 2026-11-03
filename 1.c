//Askisi 1
#include <stdio.h>

int main() {
    double x,y;
    printf("Enter two values: ");
    // Diabase 2 times
    scanf("%lf%lf", &x, &y);
    // Ypologise kai emfanise tis prajeis
    printf("%.2lf + %.2lf = %.2lf\n", x, y, x+y);
    printf("%.2lf - %.2lf = %.2lf\n", x, y, x-y);
    printf("%.2lf * %.2lf = %.2lf\n", x, y, x*y);
    printf("%.2lf / %.2lf = %.2lf\n", x, y, x/y);

    return 0;

}