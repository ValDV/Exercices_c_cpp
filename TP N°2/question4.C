#include <stdio.h>

#define Taillemax 20

void lire(int tab[], int *taille) {

    *taille = 0;
    int valeur;

    while (*taille < Taillemax) {
        printf("Valeur %d : ", *taille + 1);
        scanf("%d", &valeur);

        if (valeur == -1) {
            break;
        }

        tab[*taille] = valeur;
        (*taille)++;
    }
}

void affiche(int tab[], int taille) {
    printf("Tableau trié : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int indice_min(int tab[], int debut, int fin) {
    int indice_minimal = debut;

    for (int i = debut + 1; i <= fin; i++) {
        if (tab[i] < tab[indice_minimal]) {
            indice_minimal = i;
        }
    }

    return indice_minimal;
}

void trier(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int mémoire = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = mémoire;
            }
        }
    }
}

int main() {
    int tab[Taillemax];
    int taille;

    lire(tab, &taille);
    affiche(tab, taille);

    int indice_minimal = indice_min(tab, 0, taille - 1);
    printf("indice_min : %d\n", indice_minimal);

    trier(tab, taille);
    affiche(tab, taille);

    return 0;
}