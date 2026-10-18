#include <stdio.h>

int main() {
	int deg;
    float p, rad;
    
    p = 3.141592653589793;
    printf("Enter an angle in degrees: ");
    scanf("%d", &deg);
    rad = deg*(p/180);
    printf("Angle in radians: %f\n", rad);
    
	return 0;

}
