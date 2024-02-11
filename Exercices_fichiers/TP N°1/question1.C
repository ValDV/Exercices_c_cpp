#include <stdio.h>

int main() {
    FILE *fichier = fopen("source.txt", "r");

    if (fichier == NULL) {
        fprintf(stderr, "Erreur lors de l'ouverture du fichier source.txt en lecture.\n");
        return 1;
    }

    int caractere;
    while ((caractere = getc(fichier)) != EOF) {
        putchar(caractere); 
    }

    fclose(fichier);

    return 0;
}
