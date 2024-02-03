#include <stdio.h>

void saisirEntiers(int *adr_deb, int taille) {
    printf("Veuillez entrer %d entiers :\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Entier %d : ", i + 1);
        scanf("%d", adr_deb + i);
    }
}

void trierTableau(int *adr_deb, int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (*(adr_deb + i) > *(adr_deb + j)) {
                int temp = *(adr_deb + i);
                *(adr_deb + i) = *(adr_deb + j);
                *(adr_deb + j) = temp;
            }
        }
    }
}

void trouverMaximum(int *adr_deb, int taille) {
    int max = *(adr_deb + taille - 1);
    int position = taille;

    for (int i = taille - 2; i >= 0; i--) {
        if (*(adr_deb + i) == max) {
            position = i + 1;
        } else {
            break;
        }
    }

    printf("Maximum : %d\n", max);
    printf("Adresse du maximum : %p\n", (void *)(adr_deb + taille - 1));
    printf("Position du maximum : %d\n", position);
}

int main() {
    int *adr_deb;

    adr_deb = (int *)malloc(6 * sizeof(int));

    saisirEntiers(adr_deb, 6);
    trierTableau(adr_deb, 6);

    printf("Tableau trié en ordre croissant : ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(adr_deb + i));
    }
    printf("\n");

    trouverMaximum(adr_deb, 6);

    return 0;
}