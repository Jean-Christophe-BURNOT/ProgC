//biblioteques
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{   
    srand( time( NULL ) );
    int taille = 100;
    int i , n ;
    int intamax = 1000;
    int intmin = 0;
    int max = 0;
    int monTableau[taille];
     
    for (i = 0; i <= (taille-1); i++) 
    {
        n = rand() % intamax + intmin;
        monTableau[i] = n; 
    }

    for (i = 0; i <= (taille-1); i++) 
    {   
        n = monTableau[i];
        if (max < n)
        {
        max = n;
        }
    }

    printf("%d\n", max);
    return 0;
}   