 //2o set askisi 2.3
#include<stdio.h>

int print_array(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.02lf ", arr[i]);
        if ((i + 1) % 10 == 0) { // emfanisi 10 arithmwn se kathe grammh
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

int main() {
    double numbers[30]; // Pinakas gia tous 30 arithmous

    // eisagogh 30 arithmon apo ton xristi
    for (int i = 0; i < 30; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    double n1,n2; // boithitikes metavlites gia thn allagi
    int swapped = 1; // boolean gia na elegxoume an exei ginei allagi

    do{
        swapped = 0;
        for (int i = 0; i < 29; i++) {
            if (numbers[i] > numbers[i + 1]) {
                // allagi twn arithmwn
                n1 = numbers[i];
                n2 = numbers[i + 1];
                numbers[i] = n2;
                numbers[i + 1] = n1;
                swapped = 1; // egine allagi 
            }
        }
    }
    while (swapped); // epanalipsi mexri na min ginei allagi

    print_array(numbers, 30);
    return 0;
}
