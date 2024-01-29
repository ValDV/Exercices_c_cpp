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
