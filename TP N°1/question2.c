#include <stdio.h>

void affiche(int* t) {
    for (int i = 0; i < 10; i++) {
        printf("La position %d du tableau a pour valeur %d\n", i, t[i]);
    }
}

int main() {
    int tab[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    affiche(tab);
}