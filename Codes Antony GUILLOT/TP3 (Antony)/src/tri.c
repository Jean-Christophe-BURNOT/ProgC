//biblioteques
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{   
    srand( time( NULL ) );
    int taille = 100;
    int i , j, n ,intermediaire;
    int intamax = 1000;
    int intmin = 0;
    int monTableau[taille];
     
    for (i = 0; i <= (taille-1); i++) 
    {
        n = rand() % intamax + intmin ;
        monTableau[i] = n; 
    }

    for (i = 0; i <= (taille-1); i++) 
    {   
        n = monTableau[i];
        printf("%d\n", n);
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

    printf("YOOOOOOOOOOOOOOOLOOOOOOOOOOOOO \n");

    for (i = 0; i <= (taille-1); i++) 
    {   
        n = monTableau[i];
        printf("%d\n", n);
    }

   
    return 0;
}   