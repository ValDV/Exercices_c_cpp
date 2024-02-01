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

