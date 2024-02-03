#include <stdio.h>

void affiche(int *tab, int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", *(tab + i * colonnes + j));
        }
        printf("\n");
    }
}

int main() {
    int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int tab2[] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};

    printf("Affichage de tab1 :\n");
    affiche(tab1, 4, 5);

    printf("\nAffichage de tab2 :\n");
    affiche(tab2, 5, 4);

    return 0;
}