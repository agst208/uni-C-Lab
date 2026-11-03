//Askisi 3
#include <stdio.h>

int main() {
    int x,y,t;
    // Zhtame 2 arithmous mexri na einai tripsifioi
    do {
        printf("Enter two 3-digit numbers: ");
        scanf("%d%d", &x, &y);
        if (x <= 99 || y <= 99 || x >= 1000 || y >= 1000) {
            printf("Numbers need to be 3-digit and positive\n");
        }
    } while (x <= 99 || y <= 99 || x >= 1000 || y >= 1000);

    // Antalasoyme tis ekatodadew me tis monades me thn xrhsh prosorinhw metablitis (t)
    t = y;
    y = (y/10)*10+x/100;
    x = (x-(x/100)*100) + (t-((t/10)*10))*100;

    printf("%d %d \n", x, y);

    return 0;

}