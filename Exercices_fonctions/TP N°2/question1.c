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