//biblioteques
#include <stdio.h>
#include <limits.h>

//Constantes
int Fibonacci0 = 0;
int Fibonacci1 = 1;
int Fibonaccin  ;
int n;
int i;

int Fibonacci (int n)
{   
    if(n==0)
    {
        printf("%i\n",Fibonacci0);
        return Fibonacci0 ;
    }
    if(n==1)
    {
        printf("%i\n",Fibonacci0);
        printf("%i\n",Fibonacci1);
        return Fibonacci1 ;
    }
    else
    {
        printf("%i\n",Fibonacci0);
        printf("%i\n",Fibonacci1);
        for (i = 2; i <= n ; i++)
        {
            Fibonaccin = Fibonacci1 + Fibonacci0 ;
            Fibonacci0 = Fibonacci1 ;
            Fibonacci1 = Fibonaccin ;
            printf("%i\n",Fibonaccin);
        }
        return Fibonaccin;
    }
}



int main() 
{   
    
    printf("Entrez l'entier n pour obtenir le nieme element de la suite de Fibonacci): ");
    scanf("%i", &n);
    
    int resultat = Fibonacci(n);
    return 0;
}