/*Soit le code suivant :

int main(int argc, char** argv)
{
	int* ptr;
	*ptr = 5;
	printf("%d", ptr);

	return 0;
}

//Que donne ce code à l’exécution ?

Il renvoie vers le pointeur qui est égal à 5.*/


//Exercice 2 :

//1. En Langage C, déclarez une variable « varfloat » de type float initialisée, à la déclaration, avec la valeur 1.7

float varfloat = 1.7;

//2. Affichez l’adresse de varFloat

printf("Adresse de varfloat : %p\n", (void*)&varfloat);

//3. Déclarez une variable permettant de stocker l’adresse de la variable varFloat

float* ptr_varfloat = &varfloat;

//4. Dessinez la configuration de la mémoire

| ----------------------------|
|    varfloat                 |
|    Valeur : 1.7             |
|    Adresse : 0x7ffeefbff5ac |
| ----------------------------|

|----------------------------|
|    ptr_varfloat            |
|    Valeur : 0x7ffeefbff5ac |
|	 Adresse : 0x7ffeefbff5a8|
|----------------------------|

//5. Affichez le contenu de la zone pointée par le pointeur, en utilisant le pointeur

printf("Contenu de la zone pointée par ptr_varfloat : %f\n", *ptr_varfloat);


/*Exercice 3 :

Modifiez ces deux programmes pour n’afficher qu’une valeur sur deux du tableau :

int main(int argc, char** argv)
{
	int tabint[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* tabptr = tabint;
	int i;

	for (i = 0; i < 15; i++)
	{
		printf("%d", *(tabptr + i));
	}

	return 0;
}

int main(int argc, char** argv)
{
	int tabint[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* tabptr = tabint;
	int i;

	for (i = 0; i < 15; i++)
	{
		printf("%d", *(tabptr));
		tabptr++;
	}
}*/

int main(int argc, char** argv) {
	int tabint[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* tabptr = tabint;
	int i;

	for (i = 0; i < 15; i += 2) {
		printf("%d ", *(tabptr + i));
	}

	return 0;
}
