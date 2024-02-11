#include <stdio.h>

int main() {
    FILE *fichierAlphabet = fopen("alphabet.txt", "w");

    if (fichierAlphabet == NULL) {
        fprintf(stderr, "Erreur lors de la création du fichier alphabet.txt.\n");
        return 1; 

    for (char lettre = 'A'; lettre <= 'Z'; lettre++) {
        fputc(lettre, fichierAlphabet); 
    }

    fclose(fichierAlphabet);

    return 0;
}
