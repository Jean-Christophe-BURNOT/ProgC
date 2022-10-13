#include <stdio.h>
#include <stdlib.h>
/*
 * Ce code permet de tester les opérateurs
 */

int main()
{
    int a,b;
        a=16;
        b=3;
        printf("a+b %d\n", a+b);
        printf("a-b %d\n", a-b);
        printf("a*b %d\n", a*b);
        printf("a/b %f\n", (float)a/b);
        printf("a%%b %d\n", a%b);
        //Partie Opérateurs logiques
        /*Petit rappel:
         * 0 --> NON
         * autre chose --> OUI
         */
        printf("négation: %d\n", !a);
        printf("Et logique: %d\n", a&&b);
        printf("Ou logique: %d\n", a||b);
    return 0;
}
