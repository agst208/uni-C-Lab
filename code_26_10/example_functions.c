#include <stdio.h>

int x=9;

int read();

int main()
{
    int y;
    y=read();
    printf("The value of y is %d\n", y);

    printf("The value of global x is %d\n", x);

    return 0;
}


int read()
{
    int x;
    printf("Dose timh: ");
    scanf("%d", &x);
    printf("The value of local x is %d\n", x);
    return x;
}
