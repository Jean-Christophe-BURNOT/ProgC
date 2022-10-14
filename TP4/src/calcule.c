#include <stdio.h>
#include "operateur.h"
/*
 * Code principal qui utilise une
 * Bibliothèque pour fonctionner
 */

int main(int argc, char *argv[])
{
	switch(argv[1])
	{
		case '+':
			printf("Le resultat est %d", somme(argv[2], argv[3]);
			break;
		case '-':
			printf("Le resultat est %d", difference(argv[2], argv[3]);
			break;
		case '*':
			printf("Le resultat est %d", produit(argv[2], argv[3]);
			break;
		case '/':
			printf("Le resultat est %d", quotient(argv[2], argv[3]);
			break;
		case '%':
			printf("Le resultat est %d", modulo(argv[2], argv[3]);
			break;
		case '&':
			printf("Le resultat est %d", et(argv[2], argv[3]);
			break;
		case '|':
			printf("Le resultat est %d", ou(argv[2], argv[3]);
			break;
		case '~':
			printf("Le resultat est %d", negation(argv[2]);
			break;
	}
	return 0;
}
