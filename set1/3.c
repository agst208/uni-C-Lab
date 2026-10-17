#include <stdio.h>

int main() {
    int x,y,t;
    printf("Enter two values: ");
    scanf("%d%d", &x, &y);
    if (x > 99 && y>99 && x<1000 && y<1000) {
        t = y;
        y = (y/10)*10+x/100;
        x = (x-(x/100)*100) + (t-((t/10)*10))*100;
    
        printf("%d %d \n", x, y);
    }
    else {
        printf("wrong value types\n");
    }

    return 0;

}