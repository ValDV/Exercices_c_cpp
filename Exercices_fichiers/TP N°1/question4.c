#include <stdio.h>

long calculerTailleFichier(FILE *fichier) {
    if (!fichier) {
        perror("Erreur : pointeur de fichier non valide");
        return -1;
    }

    fseek(fichier, 0, SEEK_END);
    long taille = ftell(fichier);
    fseek(fichier, 0, SEEK_SET);

    return taille;
}

int main() {
    FILE *fichierSource = fopen("source.txt", "r");
    FILE *fichierDest1 = fopen("dest1.txt", "r");
    FILE *fichierDest2 = fopen("dest2.txt", "r");

    if (!fichierSource || !fichierDest1 || !fichierDest2) {
        perror("Erreur lors de l'ouverture d'un ou plusieurs fichiers");
        return 1;
    }

    printf("Taille du fichier source.txt : %ld octets\n", calculerTailleFichier(fichierSource));
    printf("Taille du fichier dest1.txt : %ld octets\n", calculerTailleFichier(fichierDest1));
    printf("Taille du fichier dest2.txt : %ld octets\n", calculerTailleFichier(fichierDest2));

    fclose(fichierSource);
    fclose(fichierDest1);
    fclose(fichierDest2);

    return 0;
}
