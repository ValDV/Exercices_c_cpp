//Ecrire une fonction transforme qui permet de transformer les caractères minuscules en
//majuscule dans une chaine passée en argument.
//La chaine modifiée sera affichée dans le programme principal, ainsi que le nombre de lettres
//qui ont subies une modification.


#include <stdio.h>
#include <ctype.h>

void transforme(char *chaine, int *nbModifications) {
    *nbModifications = 0;

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (islower(chaine[i])) {
            chaine[i] = toupper(chaine[i]);
            (*nbModifications)++;
        }
    }
}

int main() {
    char maChaine[100];
    int modifications = 0;

    printf("Entrez une chaine de caractéres : ");
    fgets(maChaine, sizeof(maChaine), stdin);
    transforme(maChaine, &modifications);

    printf("%s\n", maChaine);

    printf("lettres modifiées : %d\n", modifications);

    return 0;
}