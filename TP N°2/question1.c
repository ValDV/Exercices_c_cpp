// Ecrire deux fonctions qui retourne une valeur entière permettant de savoir si l’entier passé en
//argument est multiple de deux et multiple de trois pour la seconde fonction.
//Utiliser ces deux fonctions dans un petit programme qui lit un nombre entier et qui précise s’il
//est pair, multiple de 3 et/ou multiple de 6.

#include <stdio.h>
#include <ctype.h>

int Multiple2(int nombre) {
    return (nombre % 2 == 0);
}

int Multiple3(int nombre) {
    return (nombre % 3 == 0);
}

int main() {
    int nombre;
    scanf("%d", &nombre);

    if (Multiple2(nombre)) {
        printf("%d est pair.\n", nombre);
    }
      
    if (Multiple3(nombre)) {
        printf("%d est multiple de 3.\n", nombre);
    }

    if (Multiple2(nombre) && Multiple3(nombre)) {
        printf("%d est multiple de 6.\n", nombre);
    }
  
    return 0;
}