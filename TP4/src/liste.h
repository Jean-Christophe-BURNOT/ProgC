struct couleur
{
	int R;
	int G;
	int B;
	int A;
}
struct liste_couleurs
{
	struct couleur data;
	struct couleur* suivant;
}

void insertion(struct couleur *, struct liste_couleurs *);
void parcours(struct liste_couleurs *);
