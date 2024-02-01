//1.
#include <stdio.h>
float produit(float nombre1, float nombre2) {
    float resultat = nombre1 * nombre2;
    return resultat;
}


//2.
#include <stdio.h>
float divise(int num1, int num2) {
	float resultat = (float)num1 / num2;
	return resultat;
}
int main(void) {
	int nombre1;
	int nombre2;
	scanf("%f", &nombre1);
	scanf("%f", &nombre2);
	printf("%f", divise(nombre1, nombre2));
	return 0;
} 


//3.
#include <stdio.h>
float produit(float p1, float p2) {
	float presultat = p1 * p2;
	return presultat;
}
float divise( int d1, int d2) { 
	float dresultat = (float)d1 / d2;
	return dresultat;
} 
int main(void) {
	float p1;
	float p2;
	int d1;
	int d2;

	scanf("%f", &p1);
	scanf("%f", &p2);
	scanf("%d", &d1);
	scanf("%d", &d2);

	printf("%f\n", produit(p1, p));
	printf("%f\n", divise(d1, d2));
}


//4.
#include <stdio.h>
int main() {
    float moyenne (float A, float B, float C, float D, float E)
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    scanf("%f", &D);
    scanf("%f", &E);
    printf("%f\n", moyenne(A, B, C, D, E,));
}


//5.
#include <stdio.h>
int puissance3(int expo) {
	int result = pow(3, expo);
	return result;
}

int main() { 
	int exposant;
	scanf("%d", &exposant);
	print("%d", puissance3(exposant));
}