int main() {
    FILE *fichierSource = fopen("source.txt", "r");

    if (fichierSource == NULL) {
        fprintf(stderr, "Erreur lors de l'ouverture du fichier source.txt en lecture.\n");
        return 1;
    }

    FILE *fichierDest = fopen("dest1.txt", "w");

    if (fichierDest == NULL) {
        fprintf(stderr, "Erreur lors de l'ouverture du fichier dest1.txt en écriture.\n");
        return 1; 
    }

    int caractere;
    while ((caractere = getc(fichierSource)) != EOF) {
        putc(caractere, fichierDest);
    }

    fclose(fichierSource);
    fclose(fichierDest);

    return 0;
}
