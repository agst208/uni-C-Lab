// 2o set askisi 2.2
#include <stdio.h>
#include <math.h>

int main() {
    int n; 
    do {
        printf("Enter number >2: ");
        scanf("%d", &n);
        if (n <= 2) {
            printf("Please enter a number > 2.\n");
        }
    } while (n <= 2);
    n = n - 1; // mikos pinaka gia na arxizei apo to 2
    int numbers [n];

    // ftiaxnoume tin lista apo 2 mexri n
    for (int i = 0; i < n ; i++) {
        numbers[i] = i + 2;
    }
    
    for (int j=0; j < n; j++) {
        if (numbers[j] != 0 && numbers[j] < sqrt(n+1)) { // an o arithmos einai svismenos h mikroteros apo tin riza tou N, den ton elegxoume
            for (int k=j+1; k < n; k++) {      
                    // svinoume (=0) ta polaplasia tou 
                    if (numbers[k] % numbers[j] == 0 && numbers[k] != numbers[j]) numbers[k] = 0; // 0 einai svismenos
            }
        }
    }

    // emfanisi twn arithmwn pou den einai svismenoi ara einai prime
    printf("The prime numbers to %d are: \n", n+1);
    for (int l=0; l < n; l++) {
        if (numbers[l] != 0) printf("%d ", numbers[l]);
    }
    
    return 0;

}