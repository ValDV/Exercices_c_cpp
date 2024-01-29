//Ecrire une fonction mot_de_passe permettant de saisir dans une chaîne de caractères passée
//en argument un mot de passe. Pour que ce mot de passe soit gardé secret, vous ferez en sorte
//qu’à chaque appui sur une touche, on fasse apparaître une étoile.
//Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le
//mot de passe réel.
//NB : Utiliser la fonction getch() permet de lire la valeur à stocker dans la chaîne.
//Pour finir la saisie, appuyez sur la touche « ENTREE », qui possède le code ASCII 13.

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