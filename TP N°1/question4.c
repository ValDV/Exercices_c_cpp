//Ecrire une fonction qui calcule le pgcd de deux nombres initialisés dans le programme principal par l'utilisateur
#include <stdio.h>
int fonction(int V1, int V2) {
    while (V2 != 0) {
        int mémoire = V2;
        V2 = V1 % V2;
        V1 = mémoire;
    }
    return V1;
}

int main() {
    int V1, V2;
    scanf("%d", &V1);
    scanf("%d", &V2);
    int pgcd = fonction(V1, V2);

    printf("Le PGCD de %d et %d est %d\n", V1, V2, pgcd);

    return 0;
}