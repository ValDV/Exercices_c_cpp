#include <stdio.h>

int main() {
    char *chaine = NULL;
    size_t taille = 0;

    printf("Entrez une chaine de caracteres : ");
    getline(&chaine, &taille, stdin);

    if (chaine == NULL) {
        fprintf(stderr, "Erreur d'allocation de memoire.\n");
        return 1;
    }

    printf("Caracteres de la chaine avec leurs adresses :\n");
    for (size_t i = 0; chaine[i] != '\0'; i++) {
        printf("Caractere : %c\t Adresse : %p\n", chaine[i], (void *)&chaine[i]);
    }

    return 0;
}
