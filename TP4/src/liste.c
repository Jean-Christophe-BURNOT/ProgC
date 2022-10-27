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
	//Création de la liste chainée en faire 10
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
	//definition du pointeur manquant
	//appels de la fonction
	//on reaffiche la liste avec parcours()
	return 0;
}

// Fonction qui prend un pointeur de couleur et affiche la liste
void parcours(liste_couleurs *pointeur_chaine)
{
	printf("R:%x\tG:%x\tB:%x\tA:%x\t",pointeur_chaine->data.R,pointeur_chaine->data.G,pointeur_chaine->data.B,pointeur_chaine->data.A);
}
