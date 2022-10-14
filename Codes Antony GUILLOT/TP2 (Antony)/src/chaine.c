//biblioteques
#include <stdio.h>
#include <limits.h>

//Constantes
char phrase1[64];
char phrase2[64];

int taille (char * phrase)
{   
    int longeur = 0;
    while (phrase[longeur]!='\0')
    {
        longeur = longeur +1;
    }
    return longeur;
}

char * copie (char * phrase)
{
    int i;
    int longueur = taille(phrase);
    char ocopie[longueur];
    for (i = 0; i < longueur ; i++)
    {
        ocopie[i]=phrase[i];
    }
    return ocopie;
}



int main() 
{   
    printf("Entrez l'entier une chaine de charactere: ");
    scanf("%s", phrase1);

    char c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }

    printf("Entrez l'entier nouvelle chaine de charactere: ");
    scanf("%s", phrase2);

    printf("la premiere chaine fait %i charactere(s) et la deuxieme fait %i charatere(s) \n",taille(phrase1),taille(phrase2));

    printf("Voici une copie de votre chaine de caractere %s   \n",copie(phrase1)); 
    
    return 0;
}
