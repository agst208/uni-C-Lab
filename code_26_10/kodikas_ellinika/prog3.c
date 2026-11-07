#include <stdio.h>
#include <locale.h>

int main() {
    // Ρύθμιση του locale στην προεπιλογή του συστήματος
    setlocale(LC_ALL, "");

    printf("Γεια σου κόσμε! Τα ελληνικά εμφανίζονται σωστά.\n");

    return 0;
}
