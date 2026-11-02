//Askisi 3
#include <stdio.h>

int main() {
    int x,y,t;
    // Ελέγχουμε ότι και οι δύο αριθμοί είναι θετικοί και τριψήφιοι.
    do {
        printf("Enter two 3-digit numbers: ");
        scanf("%d%d", &x, &y);
        if (x <= 99 || y <= 99 || x >= 1000 || y >= 1000) {
            printf("Numbers need to be 3-digit and positive\n");
        }
    } while (x <= 99 || y <= 99 || x >= 1000 || y >= 1000);

    // Ανταλλάσσουμε τις εκατοντάδες του x με τις μονάδες του y.
    t = y;
    y = (y/10)*10+x/100;
    x = (x-(x/100)*100) + (t-((t/10)*10))*100;

    printf("%d %d \n", x, y);

    return 0;

}