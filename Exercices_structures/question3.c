#include <stdio.h>

struct Point {
    float x;
    float y;
};

void saisie(struct Point *points, int nbPoints) {
    printf("Saisir les coordonnées des points :\n");
    for (int i = 0; i < nbPoints; ++i) {
        printf("Point %d :\n", i + 1);
        printf("Saisir la coordonnée x : ");
        scanf("%f", &points[i].x);
        printf("Saisir la coordonnée y : ");
        scanf("%f", &points[i].y);
    }
}

void affiche(struct Point *points, int nbPoints) {
    printf("\nCoordonnées des points :\n");
    for (int i = 0; i < nbPoints; ++i) {
        printf("Point %d : (%.2f, %.2f)\n", i + 1, points[i].x, points[i].y);
    }
}

int main() {
    struct Point points[15];

    saisie(points, 15);
    affiche(points, 15);

    return 0;
}
