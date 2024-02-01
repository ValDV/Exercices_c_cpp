#include <stdio.h>

int main() {
  float adr1 = -45.78;
  float adr2 = 678.89;

  float *pointeuradr1 = &adr1;
  float *pointeuradr2 = &adr2;

  printf("Contenu de adr1 = %f et son adresse est : %p\n", *adr1, pointeuradr1);
  printf("Contenu de adr2 = %f et son adresse est : %p\n", *adr2, pointeuradr2);

  return 0;
}
