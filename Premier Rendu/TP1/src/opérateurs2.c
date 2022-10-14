#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Je n'ai volontairement pas copié le code de opérateur 1
 * Car je ne voyais pas comment l'adapter sans tout refaire
 * Car mes calculs se faisaient dans des printf
 */
 
int choix()
{
	int num1 = 25;
	int num2 = 15;
	//On utilise la valeur char
	char op = '+';
	int signed result;
	switch(op)
	{
	
        case '+':
	        result = num1 + num2;
	    break;
		
        case '-':
			result = num1 - num2;
		break;

        case '*':
			result = num1 * num2;
		break;
		
        case '/':
			result = num1 / num2;
		break;

        case '%':
			result = num1 % num2;
		break;

        case '&':
            result = num1 & num2;
		break;

        case '|':
            result = num1 | num2;
		break;

        case '~':
            result = ~num1 ;
		break;

		default: result = -1;
	return result;
    }
}

int main()
{
	int toto;
	toto = choix();
	printf("le résulat de l'opération du switch case est: %d\n", toto);
	return 0;
}
