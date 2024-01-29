//Un programme contient la déclaration suivante : Int tab[10]={1,2,4,8,16,32,64,128,256,512} ;
//Ecrire une fonction de prototype void affiche (int *t) qui afiiche les elements du tableau

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