// Ecrire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b, a et b 
//étant des entiers et qui renvoie le résultat au programme appelant.
//Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y, puis grâce à la fonction
//puissance vous calculerez xpuissy et vous afficherez le résultat obtenu .

#include <stdio.h>

int puissance(int x, int y) {
	int resultat = pow(x, y);
	return resultat;
}

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d", puissance(x, y));
}
