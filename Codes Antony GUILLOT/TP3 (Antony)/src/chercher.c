//biblioteques
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    char op = '*';

    switch(op)
    { 
        case '+':
        {

            srand( time( NULL ) );
            int taille = 100;
            int i , n ;
            int intamax = 50;
            int intmin = 0;
            int monTableau[taille];
            int fuyard;



            
            for (i = 0; i <= (taille-1); i++) 
            {
                n = rand() % intamax + intmin;
                monTableau[i] = n; 
            }


            /*for (i = 0; i <= (taille-1); i++) 
            {   
                n = monTableau[i];
                printf("%d\n", n);
            }   */

            printf("Entrez un entier entre %i et %i :\n",intmin,(intamax-1));
            scanf("%i", &fuyard);

            char c;
            while ( (c = getchar()) != '\n' && c != EOF ) { 

            }


            for (i = 0; i <= (taille-1); i++) 
            {   
                n = monTableau[i];
                if (fuyard == n)
                {
                    printf("l'entier %i est present \n", fuyard);
                    return 0;
                }
            }

            printf("l'entier %i est n'et pas present \n", fuyard);
            return 0;
            break;
        }

        case '*':
        {
            

            char tableau[5][150]=
            {
                "J'aime coder en C",
                "J'apprecie coder en C",
                "Je desteste coder en C",
                "Ma vie se limite a coder en C",
                "C'est quoi le C++--",
            };

            char maphrase[] = "Ma vie se limite a coder en C";

            int j;
            for (int i=0; i < 5; i++) {
                j = 0;
                while (maphrase[j] ==  tableau[i][j])
                {
                    /*printf("dfdf %d",maphrase[j]);*/
                    if (maphrase[j] == '\0') 
                    {
                        printf("la phrase est presente \n");
                        return 0;
                    }
                    else
                    {
                        j=j+1;
                    }
                }
            }
                    
            printf("la phrase n'est pas presente  \n");



        break;
        }

    }    
    return 0;
}      