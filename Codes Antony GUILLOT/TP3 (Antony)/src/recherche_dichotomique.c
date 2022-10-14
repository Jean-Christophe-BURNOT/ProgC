//biblioteques
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void recherdico(int* T,int F,int min ,int max)
    {   
        int M = (max + min)/2;

        if (min <= max)
        {
            if (T[M]==F)
            {
                printf("l'entier %i est present \n", F);
                return ; 
            }
                

            if (T[M] < F)
            {   
                return recherdico( T,F,M+1,max);
                
            }
            

            if (T[M] > F)
            {
               return recherdico( T,F,min,(M-1));
            }
                

        }
        {
            printf("l'entier %i n'est pas present \n", F);
            return  ; 
        }
        
    }

int main() 
{   
    srand( time( NULL ) );
    int taille = 100 ;
    int i , j, n ,intermediaire;
    int intamax = 1000;
    int intmin = 0;
    int monTableau[taille];
    int fuyard;

     
    for (i = 0; i <= (taille-1); i++) 
    {
        n = rand() % intamax + intmin ;
        monTableau[i] = n; 
    }

   

    for (i = 0; i <= (taille-2); i++) 
    {   
        for (j = i+1; j <= (taille-1); j++) 
        {   
            intermediaire = monTableau[i];

            if (monTableau[i] > monTableau[j])
            {
                monTableau[i] = monTableau[j];
                monTableau[j] = intermediaire;
            }
        }
    }

    /*for (i = 0; i <= (taille-1); i++) 
    {   
        n = monTableau[i];
        printf("%d\n", n);
    }*/

    printf("Entrez un entier entre %i et %i :\n",intmin,(intamax-1));
    scanf("%i", &fuyard);

    char c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }

    recherdico(monTableau,fuyard,0,taille-1);
    

    return 0;
}