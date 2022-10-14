//biblioteques
#include <stdio.h>
#include <limits.h>

//Constantes
int valeur =  1024; 
unsigned int masque = 1  ;
int j;

int main() 
{

    int limit = (sizeof(valeur)*CHAR_BIT-1);//permet de connaitre la taille en bits de notre element
    masque = masque << limit;//permet de creer un masque 1 sur le bits de poids maximal

    for (j = 0; j <= limit ; j++) //affiche 
    {

        if (0!=(valeur & masque))
        {
            printf("%i",1);
        }

        else 
        {
            printf("%i",0);
        }   

        masque = masque >> 1 ;
    }

    printf("\n");
    return 0;
}