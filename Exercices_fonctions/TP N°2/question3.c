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