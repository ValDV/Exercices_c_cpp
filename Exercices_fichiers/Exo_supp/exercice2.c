#include <stdio.h>

int main() {
    FILE *fichier = fopen("alphabet.txt", "r");

    if (fichier == NULL) {
        fprintf(stderr, "Erreur lors de l'ouverture du fichier alphabet.txt en lecture.\n");
        return 1;
    }

    int caractere;
    while ((caractere = fgetc(fichier)) != EOF) {
        putchar(caractere);
    }

    fclose(fichier);

    return 0;
}
