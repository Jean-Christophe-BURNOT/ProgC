//biblioteques
#include <stdio.h>

int num1 = 1;
int num2 = 2;
char op = '*';


int main()
{
    switch(op)
    {
        case '+': 
            printf("Voici le resultat de num1 + num2    : %i\n", num1 + num2 );
        break;

        case '-': 
            printf("Voici le resultat de num1 - num2    : %i\n", num1 - num2 );
        break;

        case '*': 
            printf("Voici le resultat de num1 * num2    : %i\n", num1 * num2 );
        break;

        case '/': 
            printf("Voici le resultat de num1 / num2    : %i\n", num1 / num2 );
        break;

        case '%': 
            printf("Voici le resultat de num1 %% num2    : %i\n", num1 % num2 );
        break;

        case '&': 
            printf("Voici le resultat de num1 & num2   : %i\n", num1 & num2 );
        break;

        case '|': 
            printf("Voici le resultat de num1 | num2   : %i\n", num1 | num2 );
        break;

        case '~': 
            printf("Voici le resultat de ~ num2   : %i\n", ~ num2 );
        break;

    }
   

    return 0;
}