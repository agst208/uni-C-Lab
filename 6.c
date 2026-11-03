//Askisi 6
#include <stdio.h>

int main() {
	int deg;
    float p, rad;

    p = 3.141592653589793;
    // diabase gonia se moires
    printf("Enter an angle in degrees: ");
    scanf("%d", &deg);
    // metetrepse se rad kai emfanise
    rad = deg*(p/180);
    printf("Angle in radians: %f\n", rad);
    
	return 0;

}
