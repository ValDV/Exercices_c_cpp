#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void empile(int pile[], int* top, int valeur);
int depile(int pile[], int* top);
void affiche(int pile[], int top);

int main(int argc, char** argv) {
    int pile[MAX];
    int top = -1;

    empile(pile, &top, 10);
    empile(pile, &top, 20);
    empile(pile, &top, 30);
    affiche(pile, top);

    int valeur_depilee = depile(pile, &top);
    printf("Valeur dépilée : %d\n", valeur_depilee);
    affiche(pile, top);

    return 0;
}

void empile(int pile[], int* top, int valeur) {
    if (*top >= MAX - 1) {
        printf("La pile est pleine, impossible d'empiler la valeur %d\n", valeur);
    }
    else {
        (*top)++;
        pile[*top] = valeur;
        printf("Valeur %d empilée\n", valeur);
    }
}

void depile(int pile[], int* top) {
    if (*top < 0) {
        printf("La pile est vide, impossible de dépiler\n");
        return -1;
    }
    else {
        int valeur = pile[*top];
        (*top)--;
        return valeur;
    }
}

void affiche(int pile[], int top) {
    if (top < 0) {
        printf("La pile est vide\n");
    }
    else {
        printf("Contenu de la pile : ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", pile[i]);
        }
        printf("\n");
    }
}
