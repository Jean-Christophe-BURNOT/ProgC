#include <stdio.h>
#include <stdlib.h>
/*
 * Code qui permet d'utiliser des structures itératives
 */

int main()
{
    //On parcours tous les indices jusqu'a 1000
    for(int toto=1; toto<=1000; toto++)
    {
        //On met la négation pour avoir un retour à 1 et passer dans le if
        if (!(toto%2) && !(toto%15))
        {
            printf("%d est divisible par 2 et 15\n", toto);
        }
        if (!(toto%103) || !(toto%105))
        {
            printf("%d est divisible par 103 ou 105\n", toto);
        }
        if ((!(toto%7) || !(toto%5)) && (toto%3))
        {
            printf("%d est divisible par 7 ou 5, mais pas par 3\n", toto);
        }
    }
    return 0;
}
