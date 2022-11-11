#include <stdio.h>
#include "operator.h"
/*
 * Code principal qui utilise une
 * Bibliothèque pour fonctionner
 */

struct input {
	int A;
	int B;
	char op;
};

void ihm(struct input *args)
{
	printf("Entrez une opération dans la liste suivante A (+,-,*,/,%%,&,|) B\n\n");
	printf("Dans le cas de la négation (~) seule le premier entier est pris en compte\nmais il faut bien écrire les deux entiers\n");
	scanf("%d %c %d",&(args->A), &(args->op), &(args->B));
}
int main()
{
	struct input args;
	ihm(&args);
	switch(args.op)
	{
		case '+':
			printf("Le resultat est %d", somme(args.A,args.B));
			break;
		case '-':
			printf("Le resultat est %d", difference(args.A,args.B));
			break;
		case '*':
			printf("Le resultat est %d", produit(args.A,args.B));
			break;
		case '/':
			printf("Le resultat est %d", quotient(args.A,args.B));
			break;
		case '%':
			printf("Le resultat est %d", modulo(args.A,args.B));
			break;
		case '&':
			printf("Le resultat est %d", et(args.A,args.B));
			break;
		case '|':
			printf("Le resultat est %d", ou(args.A,args.B));
			break;
		case '~':
			printf("Le resultat est %d", negation(args.A));
			break;
	}
	return 0;
}
