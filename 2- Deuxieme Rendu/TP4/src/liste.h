/*
 * J'ai pris la décision de ne pas faire de listes de contrôle
 */

//Structure de la data
typedef struct couleur couleur;
struct couleur
{
	int R;
	int G;
	int B;
	int A;
};

//Liste qui a pour vocation de devenir notre liste chaînée
typedef struct liste_couleurs liste_couleurs;
struct liste_couleurs
{
	//J'ai utilisé des typedef
	couleur data;
	//Adresse de notre objet liste_couleurs suivant
	liste_couleurs *suivant;
};

//J'ai pris la liberté de modifier les prototypes (j'ai utilisé typedef)
void insertion(couleur *pointeur_couleur, liste_couleurs *pointeur_chaine);
void parcours(liste_couleurs *pointeur_chaine);
