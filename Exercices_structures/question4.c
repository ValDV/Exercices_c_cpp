#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[10];
    char prenom[10];
    int nbnotes;
    float note[50];
} noteseninfo;

void saisir(noteseninfo *classe, int *nbEleves) {
    char nom[10];
    char prenom[10];

    printf("Saisir le nom de l'élève : ");
    scanf("%s", nom);
    printf("Saisir le prénom de l'élève : ");
    scanf("%s", prenom);

    int i;
    for (i = 0; i < *nbEleves; ++i) {
        if (strcmp(classe[i].nom, nom) == 0 && strcmp(classe[i].prenom, prenom) == 0) {
            printf("Elève déjà présent. Ajout des nouvelles notes.\n");
            printf("Saisir le nombre de notes : ");
            scanf("%d", &classe[i].nbnotes);
            for (int j = 0; j < classe[i].nbnotes; ++j) {
                printf("Saisir la note %d : ", j + 1);
                scanf("%f", &classe[i].note[j]);
            }
            return;
        }
    }

    strcpy(classe[*nbEleves].nom, nom);
    strcpy(classe[*nbEleves].prenom, prenom);
    printf("Saisir le nombre de notes : ");
    scanf("%d", &classe[*nbEleves].nbnotes);
    for (int j = 0; j < classe[*nbEleves].nbnotes; ++j) {
        printf("Saisir la note %d : ", j + 1);
        scanf("%f", &classe[*nbEleves].note[j]);
    }

    (*nbEleves)++;
}

void affiche(noteseninfo *classe, int nbEleves) {
    printf("\nListe des élèves avec leurs notes :\n");
    for (int i = 0; i < nbEleves; ++i) {
        printf("Elève %d :\n", i + 1);
        printf("Nom : %s\n", classe[i].nom);
        printf("Prénom : %s\n", classe[i].prenom);
        printf("Nombre de notes : %d\n", classe[i].nbnotes);
        printf("Notes : ");
        for (int j = 0; j < classe[i].nbnotes; ++j) {
            printf("%.2f ", classe[i].note[j]);
        }
        printf("\n\n");
    }
}

int main() {
    noteseninfo classe[50];
    int nbEleves = 0;
    int choix;

    do {
        printf("1. Saisir les notes pour un élève\n");
        printf("2. Afficher la liste des élèves avec leurs notes\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisir(classe, &nbEleves);
                break;
            case 2:
                affiche(classe, nbEleves);
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 0);

    return 0;
}
