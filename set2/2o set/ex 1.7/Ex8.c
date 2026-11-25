//2o set askisi 8
#include<stdio.h>

int main() {
    int x, y, r; //r -> prosorini metabliti

    do {
        printf("Enter two positie numbers: ");
        scanf("%d%d", &x, &y);
        if (x<0 || y<0) {
            printf("Numbers need to be positive.\n");
        }
    }
    while (x<0 || y<0);

    while (y != 0) {
        r = y;
        y = x % y; 
        x = r;  
    }

    printf("O megistos koinos dieretis einai: %d\n", x);
    
    return 0;
}