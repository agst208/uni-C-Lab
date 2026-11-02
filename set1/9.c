//Askisi 9
#include <stdio.h>

int main() {

    int sec;

    // Ζητάμε ξανά την τιμή αν ο αριθμός δευτερολέπτων είναι αρνητικός.
    do {
        printf("Enter seconds: ");
        scanf("%d", &sec);
        if (sec < 0) printf("Number needs to be non-negative.\n");
    } while (sec < 0);

    // Διαιρούμε τα δευτερόλεπτα με 3600 για να τα εκφράσουμε σε ώρες.
    printf("%d seconds is %.3lf hours \n", sec, sec/3600.000);

    return 0;
}   