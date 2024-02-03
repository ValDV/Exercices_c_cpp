#include <stdio.h>

int main() {
    float *adr1 = NULL, *adr2 = NULL;

    float valeur1 = -45.78;
    float valeur2 = 678.89;

    adr1 = &valeur1;
    adr2 = &valeur2;

    printf("Adresse de adr1 : %p\n", (void *)adr1);
    printf("Contenu de adr1 : %.2f\n", *adr1);

    printf("Adresse de adr2 : %p\n", (void *)adr2);
    printf("Contenu de adr2 : %.2f\n", *adr2);

    return 0;
}