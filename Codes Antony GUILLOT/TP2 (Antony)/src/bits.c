//biblioteques
#include <stdio.h>
#include <limits.h>

//Constantes
int d;

int verification (int d)
{   
    int resultat = 0 ;
    int limit = (sizeof(d)*CHAR_BIT-1);//permet de connaitre la taille en bits de notre element

    unsigned int masque1 = 1;
    unsigned int masque2 = 1;
    masque1 = masque1 << limit-3;
    masque2 = masque2 << limit-19;
    if ((0!=(d & masque1))&(0!=(d & masque2)))
    {
        resultat = 1;
    }
    return resultat;
}



int main() 
{   
    
    printf("Entrez l'entier d: ");
    scanf("%i", &d);
    
    int resultat = verification(d);
    printf("%i\n",resultat);
    return 0;
}