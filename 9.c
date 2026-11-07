//Askisi 9
#include <stdio.h>

int main() {

    int sec;

    // zhtaei arithmo mexri >=0
    do {
        printf("Enter seconds: ");
        scanf("%d", &sec);
        if (sec < 0) printf("Number needs to be >=0.\n");
    } while (sec < 0);

    // diairei me to 3600 kai emfanize tis ores me 3 dekadika psifia
    printf("%d seconds is %.3lf hours \n", sec, sec/3600.000);

    return 0;
}   

//dhqwevdqvy qwhvynjbqhjdhyehvuaygyvhe
