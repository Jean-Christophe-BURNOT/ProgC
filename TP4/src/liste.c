#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * Ce code parcours des listes de couleurs avec
 * un pointeur
 */

struct Couleur
{
    int R;
    int G;
    int B;
    int A;
};


int main() 
{   
    srand( time( NULL ) );
    int taille = 100;
    struct Couleur couleur;
    int intamax = 256;
    int intmin = 0;
    struct Couleur Couleurs[taille];
    for (int i = 0; i <= (taille-1); i++) 
    {
        couleur.R = rand() % intamax;
        couleur.G = rand() % intamax;
        couleur.B = rand() % intamax;
        couleur.A = rand() % intamax;
        Couleurs[i] = couleur; 
    }
