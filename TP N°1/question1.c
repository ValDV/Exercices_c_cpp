// Ecrire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b, a et b 
//étant des entiers et qui renvoie le résultat au programme appelant.
//Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y, puis grâce à la fonction
//puissance vous calculerez xpuissy et vous afficherez le résultat obtenu .

#include <stdio.h>


int puissance(int A, int B) {
	int resultat = pow(A, B);
	return resultat;
}

int main() {
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);
	printf("%d", puissance(A, B));
}
