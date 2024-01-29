//Ecrire une fonction qui calcule le pgcd de deux nombres initialisés dans le programme principal par l'utilisateur
#include <stdio.h>
int fonction(int v1, int v2) {
    while (v2 != 0) {
        int mémoire = v2;
        v2 = v1 % v2;
        v1 = mémoire;
    }
    return v1;
}

int main() {
    int v1, v2;
    scanf("%d", &v1);
    scanf("%d", &v2);
    int pgcd = fonction(v1, v2);

    printf("Le PGCD de %d et %d est %d\n", v1, v2, pgcd);

    return 0;
}