#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "liste.h"
/*
 * Ce code parcours des listes de couleurs avec
 * un pointeur
 */
int main()
{   
	//Création de la liste chainée en faire 10 (j'ai fait le typedef après)
	struct liste_couleurs case1;
	struct liste_couleurs case2;
	case1.suivant = &case2;
	struct liste_couleurs case3;
	case2.suivant = &case3;
	struct liste_couleurs case4;
	case3.suivant = &case4;
	struct liste_couleurs case5;
	case4.suivant = &case5;
	struct liste_couleurs case6;
	case5.suivant = &case6;
	struct liste_couleurs case7;
	case6.suivant = &case7;
	struct liste_couleurs case8;
	case7.suivant = &case8;
	struct liste_couleurs case9;
	case8.suivant = &case9;
	struct liste_couleurs case10;
	case9.suivant = &case10;
	case10.suivant = NULL;
	//On initialise quelques couleurs (le reste osef)
	case7.data.R = 0x6c;
	case7.data.G = 0xf2;
	case7.data.B = 0xee;
	case7.data.A = 0xff;
	case8.data.R = 0x6c;
	case8.data.G = 0xf2;
	case8.data.B = 0xee;
	case8.data.A = 0xff;
	case9.data.R = 0xf2;
	case9.data.G = 0xee;
	case9.data.B = 0xff;
	case9.data.A = 0xff;
	//Test fonction parcours
	//definition des pointeurs (optionnel on pourrait juste envoyer l'adresse)
	liste_couleurs *pointeur_chaine = &case1;
	//appels de la fonction
	parcours(pointeur_chaine);
	//Test fonction insertion 
	//separation visuelle
	printf("\n__________On ajoute une couleur:__________\n\n");
	//definition d'une couleur et du pointeur manquant
	couleur ajout = {0xff,0xf2,0xf3,0xf4};
	couleur *pointeur_couleur = &ajout;
	//On remet le premier pointeur à la première valeur
	pointeur_chaine = &case1;
	//appels de la fonction
	insertion(pointeur_couleur, pointeur_chaine);
	//on reaffiche la liste avec parcours()
	parcours(pointeur_chaine);
	return 0;
}

// Fonction qui prend un pointeur de couleur et affiche la liste
void parcours(liste_couleurs *pointeur_chaine)
{
	do
	{
		printf("R:%x\tG:%x\tB:%x\tA:%x\n",pointeur_chaine->data.R,pointeur_chaine->data.G,pointeur_chaine->data.B,pointeur_chaine->data.A);
		pointeur_chaine = pointeur_chaine->suivant;
	}
	while(pointeur_chaine->suivant != NULL);
	//print le dernier élément
	printf("R:%x\tG:%x\tB:%x\tA:%x\n",pointeur_chaine->data.R,pointeur_chaine->data.G,pointeur_chaine->data.B,pointeur_chaine->data.A);
}

//Fonction qui prend un pointeur de couleur
// et le pointeur de notre liste chainé
// elle ajoute notre couleur comme dernier élément d'une liste
void insertion(couleur *pointeur_couleur, liste_couleurs *pointeur_chaine)
{
	//amène le pointeur au dernier élément avec un for on pourrait faire une insertion n'importe où
	do
	{
		pointeur_chaine = pointeur_chaine->suivant;
	}
	while(pointeur_chaine->suivant != NULL);
	
	liste_couleurs nouvel_element;
	nouvel_element.data.R = pointeur_couleur->R;
	nouvel_element.data.G = pointeur_couleur->G;
	nouvel_element.data.B = pointeur_couleur->B;
	nouvel_element.data.A = pointeur_couleur->A;
	nouvel_element.suivant = NULL;
	pointeur_chaine->suivant = &nouvel_element;
}
