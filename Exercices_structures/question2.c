#include <stdio.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point points[15];
    
    printf("Saisir les coordonnées des 15 points :\n");
    for (int i = 0; i < 15; ++i) {
        printf("Point %d :\n", i + 1);
        printf("Saisir la coordonnée x : ");
        scanf("%f", &points[i].x);
        printf("Saisir la coordonnée y : ");
        scanf("%f", &points[i].y);
    }

    printf("\nCoordonnées des points :\n");
    for (int i = 0; i < 15; ++i) {
        printf("Point %d : (%.2f, %.2f)\n", i + 1, points[i].x, points[i].y);
    }

    return 0;
}
