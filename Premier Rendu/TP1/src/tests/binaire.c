#include <stdio.h>
#include <stdlib.h>
/*
 * Programme qui convertit un entier int
 * en binaire
 */
int ihm()
{
    int valeur=0;
    printf("Choisissez un nombre Naturel à convertir\n");
    scanf("%d", &valeur);
    return valeur;
}


int main()
{
    int val;
    val = ihm();
    //10 est le nombre de digits maximal que peut prendre notre code binaire
    int binaire[10];
    int i = 0;
    if (val==0)
    {
        printf("0");
    }
    else
    {
        for (i=0; val>0; i++)
        {
            binaire[i] = val%2;
            val/=2;
        }
        //boucle d'affichage dans le cas où le nombre n'est pas 0
        //se base sur i-1 pour boucler le nombre de fois voulu
        for (i -= 1; i>=0; i--);
        {
            printf("%d", binaire[i]);
        }
    }

    return 0;
}
