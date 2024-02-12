#include <stdio.h>

struct Fiche {
    int valeur;
};

int main() {
    struct Fiche maFiche;

    printf("Saisir la valeur de la fiche : ");
    scanf("%d", &maFiche.valeur);
    printf("\nValeur de la fiche : %d\n", maFiche.valeur);

    return 0;
}
