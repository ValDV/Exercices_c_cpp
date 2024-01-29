// Un programme contient la déclaration suivante : Float liste[8]={1.6,-6.9,9.67,5.90,345,-23.6,78,34.6} ;
//Ecrire une fonction de prototype float min (float* tab) qui renvoie le minimum de la liste.
//Ecrire une fonction de prototype float max (float *tab) qui renvoie le maximum de la liste.

#include <stdio.h>

float min(float *tab) {
  float valmin = tab[0];
  for (int i = 0; i < 8; i++) {
    if (tab[i] < valmin) {
      valmin = tab[i];
    }
  }
  return valmin;
}

float max(float *tab) {
  int valmax = tab[0];
  for (int i = 0; i < 8; i++) {
    if (tab[i] > valmax) {
      valmax = tab[i];
    }
  }
  return valmax;
}

int main() {
  float tab[8] = {1.6, -6.9, 9.67, 5.90, 345, -23.6, 78, 34.6};
  printf("Le minimum est %f\n", min(tab));
  printf("Le maximum est %f\n", max(tab));
}