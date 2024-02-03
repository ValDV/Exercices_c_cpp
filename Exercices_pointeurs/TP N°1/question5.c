#include <stdio.h>

void saisie(float *aa, float *bb, float *cc);
float *calcul(float aa, float bb, float cc);

int main() {
    float a, b, c;
    saisie(&a, &b, &c);
    float *racines = calcul(a, b, c);
    printf("Les racines de l'equation sont : %.2f + %.2fi et %.2f - %.2fi\n", racines[0], racines[1], racines[0], racines[1]);

    return 0;
}

void saisie(float *aa, float *bb, float *cc) {
    printf("Entrez la valeur de a : ");
    scanf("%f", aa);
    printf("Entrez la valeur de b : ");
    scanf("%f", bb);
    printf("Entrez la valeur de c : ");
    scanf("%f", cc);
}

float *calcul(float aa, float bb, float cc) {
    float discriminant = bb * bb - 4 * aa * cc;
    float *racines = (float *)malloc(2 * sizeof(float));

    if (discriminant > 0) {
        racines[0] = (-bb + sqrt(discriminant)) / (2 * aa);
        racines[1] = (-bb - sqrt(discriminant)) / (2 * aa);
    } else if (discriminant == 0) {
        racines[0] = racines[1] = -bb / (2 * aa);
    } else {
        racines[0] = -bb / (2 * aa);
        racines[1] = sqrt(-discriminant) / (2 * aa);
    }

    return racines;
}
