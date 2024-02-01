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
