#include <stdio.h>

int lireDonnees(char *nomFichier, int *T) {
    FILE *fichier = fopen(nomFichier, "r");
    if (!fichier) {
        perror("Erreur lors de l'ouverture du fichier en lecture");
        return -1;
    }

    int nbEntiers = 0;
    while (fscanf(fichier, "%d", &T[nbEntiers++]) == 1 && nbEntiers < 100);

    fclose(fichier);
    return nbEntiers;
}

void afficherTableau(int *T, int nb) {
    for (int i = 0; i < nb; printf("%d ", T[i++]));
    printf("\n");
}

void triABulles(int *T, int nb) {
    for (int i = 0; i < nb - 1; i++)
        for (int j = 0; j < nb - i - 1; j++)
            if (T[j] > T[j + 1])
                T[j] ^= T[j + 1] ^= T[j] ^= T[j + 1];
}

void enregistrerDonnees(char *nomFichier, int *T, int nb) {
    FILE *fichier = fopen(nomFichier, "w");
    if (!fichier) {
        perror("Erreur lors de l'ouverture du fichier en écriture");
        return;
    }

    for (int i = 0; i < nb; fprintf(fichier, "%d ", T[i++]));
    fclose(fichier);
}

int main() {
    char *nomFichierLecture = "entiers.txt";
    char *nomFichierEnregistrement = "entiers_tries.txt";

    int tableau[100];
    int nbEntiers = lireDonnees(nomFichierLecture, tableau);

    if (nbEntiers == -1)
        return 1;

    printf("Tableau avant le tri : ");
    afficherTableau(tableau, nbEntiers);
    triABulles(tableau, nbEntiers);
    printf("Tableau après le tri : ");
    afficherTableau(tableau, nbEntiers);
    enregistrerDonnees(nomFichierEnregistrement, tableau, nbEntiers);

    return 0;
}
