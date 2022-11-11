#include <stdio.h>
#include <stdlib.h>
#include "operator.h"
/*
 * Code principal qui utilise une
 * Bibliothèque pour fonctionner
 */

int main(int argc, char **argv)
{
	// Juste pour enlever le warning
	argc++;
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	switch(argv[1][0])
	{
		case '+':
			printf("Le resultat est %d", somme(a, b));
			break;
		case '-':
			printf("Le resultat est %d", difference(a, b));
			break;
		case '*':
			printf("Le resultat est %d", produit(a, b));
			break;
		case '/':
			printf("Le resultat est %d", quotient(a, b));
			break;
		case '%':
			printf("Le resultat est %d", modulo(a, b));
			break;
		case '&':
			printf("Le resultat est %d", et(a, b));
			break;
		case '|':
			printf("Le resultat est %d", ou(a, b));
			break;
		case '~':
			printf("Le resultat est %d", negation(a));
			break;
	}
	return 0;
}
