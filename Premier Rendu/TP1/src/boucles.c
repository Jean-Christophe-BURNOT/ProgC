#include <stdio.h>
#include <stdlib.h>
/*
 * Code qui permet de générer
 * un triange a base de "*"
 * pour les contours et de "#"
 * pour l'intérieur
 */

int main()
{
    char ex = 3;
    int taille;
    int i;
    switch (ex)
    {
        case 1:
            printf("Choisissez la taille de triange (entier positif)\n");
            scanf("%d", &taille);
            for (int i=1; i<=taille; i++)
            {
                if (i==1)
                {
                    printf("\n*\n");
                }
                else if (i>1 && i!=taille)
                {
                    printf("*");
                    for (int j=1; j<=i-2; j++)
                    {
                        printf("#");
                    }
                    printf("*\n");
                }
                else if (i==taille)
                {
                    for (int j=0; j<=taille; j++)
                    {
                        printf("*");
                    }
                }
            }
            break;
        case 2:
            printf("Choisissez la taille de triange (entier positif)\n");
            scanf("%d", &taille);
            //Premier indice de sommation
            i=1;
            //Deuxieme indice de sommation
            int j;
            while (i<=taille)
            {
                if (i==1)
                {
                    printf("\n*\n");
                }
                else if (i>1 && i<taille)
                {
                    printf("*");
                    j=1;
                    while (j<=i-2)
                    {
                        j++;
                        printf("#");
                    }
                    printf("*\n");
                }
                else if (i==taille)
                {
                    j=0;
                    while (j<=taille)
                    {
                        j++;
                        printf("*");
                    }
                }
                i++;
            }
            break;
        case 3:
            printf("Choisissez la taille de triange (entier positif)\n");
            scanf("%d", &taille);
            i = 1;
            do {
                int j = 0;
                do {
                    if (j == i-1) {
                        printf("*\n");
                    } else if (i == taille || j == 0) {
                        printf("* ");
                    } else {
                        printf("# ");
                    }
                    j++;
                } while (j < i);
                
                i++;
            } while (i < taille+1);
    }
    return 0;
}
