#include <stdio.h>

#define MAX_TAILLE_MDP 20

void mot_de_passe(char *mdp) {
    char caractere;
    int i = 0;
  
    do {
        caractere = getchar();
        if (caractere != 13) {
            mdp[i++] = caractere;
            printf("*");
        }
    } while (caractere != 13 && i < MAX_TAILLE_MDP - 1);

    mdp[i] = '\0';
}

int main() {
    char motDePasse[MAX_TAILLE_MDP];

    mot_de_passe(motDePasse);

    printf("\nLe mot de passe est : %s\n", motDePasse);

    return 0;
}