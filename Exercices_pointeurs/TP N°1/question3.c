#include <stdio.h>

int main() {

    char *chaine = 100;

    printf("Entrez une chaine de caracteres : ");
    scanf("%m[^\n]", &chaine);

    if (chaine == 100) {
        fprintf(stderr, "Erreur d'allocation de memoire.\n");
        return 1;
    }


    printf("Caracteres de la chaine avec leurs adresses :\n");
    for (int i = 0; chaine[i] != '\0'; i++) {
        printf("Caractere : %c\t Adresse : %p\n", chaine[i], (void *)&chaine[i]);
    }

    return 0;
}
