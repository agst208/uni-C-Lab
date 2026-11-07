#include <stdio.h>

int main()
{
    int x;
    int SA; //syxnotero arithmos
    int PESA; //syxnothta syxnoterou
    int YSA; //ypopsifios syxnos;
    int PEYSA=0; //syxnottha ypopsifiou

    int i, n;
    do
    {
    printf("Dose plithos >1: ");
    scanf("%d", &n);
    }
    while (n<=1);

    printf("Give values: ");

    scanf("%d", &x);

    YSA=x;
    SA=x;
    PESA=0;

    for (i=1; i<=n-1; i++)
    {
        scanf("%d", &x);
        if (x==YSA)
             {
            PEYSA++;
            if (PEYSA>=PESA) {
                           SA=YSA;
                           PESA=PEYSA;
                           }
             }
        else {

               YSA=x;
               PEYSA=0;
              }

    }

    printf("The value and its repetitions are: %d and %d\n", SA, PESA);

    return 0;


}
