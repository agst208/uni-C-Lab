#include <stdio.h>

int main() {
    int input_pin;
    int option;
    unsigned long balance = 100; // Arxiko ypoloipo
    unsigned long amount;
    int CORRECT_PIN = 2014; // Orismos tou swstou PIN

   
    do {
        printf("Enter PIN: ");
        scanf("%d", &input_pin);

        if (input_pin != CORRECT_PIN) {
            printf("Lathos PIN ksanadokimaste.\n");
        }
    } while (input_pin != CORRECT_PIN);

    printf("Success!\n\n");

    do {
        printf("MENU\n");
        printf("1. Diathesimo Ypoloipo\n");
        printf("2. Katathesi Metrhtwn\n");
        printf("3. Analipsi Metrhtwn\n");
        printf("4. Exit\n");
        printf("Epelekse (1-4): ");
        
        scanf("%d", &option);

        printf("\n");

        switch (option) {
            case 1:
                // diathesimo ypoloipo
                printf("To ypoloipo einai: %lu€\n", balance);
                break;

            case 2:
                // katathesi
                printf("Eisagete poso katathesis: ");
                scanf("%lu", &amount);
                balance += amount;
                printf("Katathesi oloklirothike.\n");
                printf("Neo ypoloipo: %lu€\n", balance);
                break;

            case 3:
                // analipsi
                printf("Eisagete poso analipsis: ");
                scanf("%lu", &amount);

                if (amount == 0) {
                    printf("to poso prepei na einai > 0\n");
                } 
                else if (amount % 20 != 0) {
                    printf("to poso prepei na einai pollaplasio tou 20\n");
                } 
                else if (amount > balance) {
                    printf("aneparkes ypoloipo: %lu€\n", balance);
                } 
                else {
                    balance -= amount;
                    printf("Epitixis analipsi: %lu€. \n", amount);
                }
                break;

            case 4:
                // exit
                printf("Exit \n");
                break;

            default:
                printf("Mh egkyri epilogi! Parakalw epelekse apo 1 ews 4.\n");
                break;
            
            
        }
        printf("\n");

    } while (option != 4);

    return 0;
}