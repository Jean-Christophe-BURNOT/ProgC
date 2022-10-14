#include <stdio.h>
#include <math.h>
/*
 * Code qui permet de calculer
 * le perimetre et l'aire d'un cercle
 */

//fonction qui permet à l'utilisateur de choisir le rayon
int ihm()
{
    int rayon=0;
    while (rayon==0)
    {
        printf("Choisissez un rayon \n");
        scanf("%d",&rayon);
    }
    return rayon;
}

int main()
{
    float r, perimetre, aire;
    r=ihm();
    perimetre=2*M_PI*r;
    aire = M_PI*r*r;
    printf("Le cercle a un perimetre de %f et une aire de %f", perimetre, aire);
    return 0;
}
