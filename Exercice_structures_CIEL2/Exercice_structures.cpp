#include <stdio.h>

typedef struct {
    int heures;
    int minutes;
    int secondes;
} Heure;

int heure_en_secondes(Heure h);
Heure secondes_en_heure(int secondes);
Heure additionner_heures(Heure h1, Heure h2);
void afficher_heure(Heure h);

int main() {
    Heure h1, h2, resultat;
    int secondes;

    printf("Entrez l'heure (hh mm ss) : ");
    scanf("%d %d %d", &h1.heures, &h1.minutes, &h1.secondes);

    int total_secondes = heure_en_secondes(h1);
    printf("Temps en secondes : %d\n", total_secondes);

    printf("Entrez un nombre de secondes : ");
    scanf("%d", &secondes);

    h2 = secondes_en_heure(secondes);
    printf("Temps correspondant : ");
    afficher_heure(h2);

    resultat = additionner_heures(h1, h2);
    printf("Résultat de l'addition des deux heures : ");
    afficher_heure(resultat);

    return 0;
}

int heure_en_secondes(Heure h) {
    return (h.heures * 3600) + (h.minutes * 60) + h.secondes;
}

Heure secondes_en_heure(int secondes) {
    Heure h;
    h.heures = secondes / 3600;
    secondes %= 3600;
    h.minutes = secondes / 60;
    h.secondes = secondes % 60;
    return h;
}

Heure additionner_heures(Heure h1, Heure h2) {
    Heure resultat;
    resultat.secondes = h1.secondes + h2.secondes;
    resultat.minutes = h1.minutes + h2.minutes + (resultat.secondes / 60);
    resultat.secondes %= 60;
    resultat.heures = h1.heures + h2.heures + (resultat.minutes / 60);
    resultat.minutes %= 60;
    return resultat;
}

void afficher_heure(Heure h) {
    printf("%02d:%02d:%02d\n", h.heures, h.minutes, h.secondes);
}
