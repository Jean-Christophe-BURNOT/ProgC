//biblioteques
#include <stdio.h>
/*
 * Permet de calculer la puissance d'un entier
 * (Le calcul est a^b)
 * Gère les puissances négatives
 */

//Constantes
int a ;
int b ;

float puissance (int a, int b)
{
    int i ;
    float multiplicateur ;
    float resultat = 1;

    if (b < 0)
    {   
        multiplicateur =  ((float)1/a) ;
        b = -b;
    }
    else 
    {   
        multiplicateur =  a ;
    }
    
    for (i = 0; i < b ; i++)
    {
        resultat = resultat * multiplicateur ;
    }
    return resultat;
}



int main() 
{   
    
    printf("Entrez l'entier a: ");
    scanf("%d", &a);
    char c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }
    printf("Entrez l'entier b: ");
    scanf("%i", &b);
    
    float resultat = puissance(a,b);
    printf("%f\n",resultat);
    return 0;

}
  


    
