#include <stdio.h>

void saisie(int *val, int *nb);
void affiche(int *val, int nb);

int main() {
    int valeurs[20];
    int nombreDeValeurs = 0;

    saisie(valeurs, &nombreDeValeurs);
    affiche(valeurs, nombreDeValeurs);
    printf("Nombre de valeurs entrées : %d\n", nombreDeValeurs);

    return 0;
}

void saisie(int *val, int *nb) {
    int valeur;
    printf("Entrez des entiers différents de 0 (au maximum 20).\nLa dernière valeur doit être 0.\n");

    do {
        printf("Entrez une valeur : ");
        scanf("%d", &valeur);

        if (valeur != 0) {
            *val = valeur;
            val++;
            (*nb)++;
        }
    } while (valeur != 0 && *nb < 20);
}

void affiche(int *val, int nb) {
    printf("\nLes valeurs entrées sont : ");
    for (int i = 0; i < nb; i++) {
        printf("%d ", *val);
        val++;
    }
    printf("\n");
}
