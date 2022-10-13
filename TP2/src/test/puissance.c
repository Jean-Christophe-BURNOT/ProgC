#include <stdio.h>
#include <stdlib.h>
/*
 * Ce programme permet de calculer des puissances
 * en utilisant une fonction récursive
 */

int *ihm(int retour[2])
{
    int a,b;
    printf("Choisisez un nombre naturel à mettre a la puissance\n");
    scanf("%d",&a);
    retour[1] = a;
    printf("Choisisez a quel puissance vous voulez l'élever\n");
    scanf("%d",&b);
    retour[2] = b;
    return retour;
}

//fonction récurisive pour
int mult(int ant[2])
{
    if (ant[2]=0)
    {
        return ant[1];
    }
    else
    {
        ant[1] *= ant[1];
        ant[2] -= 1;
        return mult(ant[]);
    }
}

int main()
{
    int resultat, ant;
    int liste[2];
    ihm(liste);
    resultat = mult(liste);
    printf("Le résultat est: %d\n", resultat);
    return 0;
}
