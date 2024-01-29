//Ecrire une fonction de prototype « void inverse(char *ch) » qui permette de convertir un texte,
//c’est à dire qui inverse le contenu d’une chaine de caractères. la mettre en oeuvre dans main().
// EX: il fait beau va donner -->  uaeb tiaf li

#include <string.h>
#include <stdio.h>

int inverserchaine(char *chaine) {
  int e=0;
  char chaineinverser[9999];
  for(int i=strlen(chaine)-2; i>=0; i--) {
    chaineinverser[e]=chaine[i];
    e++;
  }
  return chaineinverser;
}

int main() {
  char chaine[99999];
  fgets(chaine, sizeof(chaine), stdin);
  printf("%s", inverserchaine(chaine));
}

