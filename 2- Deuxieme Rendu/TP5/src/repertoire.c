#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "repertoire.h"

#ifndef MAX
#define MAX 1000
#endif
/*
 * Code qui parcours un répertoire saisi par l'utilisateur
 * la méthode pour parcourir les dossiers est hardcodé
 */

int main()
{
	char input[256];
	printf("Repertoire à afficher (Chemin absolu)\n");
	scanf("%s", input);
	lire_dossier_iteratif(input);
	return 0;
}

void lire_dossier(char *input)
{
	DIR *dir;
	struct dirent *entry;
	dir = opendir(input);
	while ((entry = readdir(dir)) != NULL)
	{
		printf("  %s\n", entry->d_name);
	}
}

void lire_dossier_recursif(char *input)
{
	DIR *dir;
	struct dirent *entry;
	if ((dir = opendir(input)) == NULL) 
	{
		printf("Permission denied\n");
		return;
	}
	while ((entry = readdir(dir)) != NULL)
	{
		printf("  %s\n", entry->d_name);
		if (entry->d_type==DT_DIR)
		{
			if (strcmp(entry->d_name,".") && strcmp(entry->d_name,".."))
			{
				char *path = malloc(strlen(entry->d_name)+strlen(input)+2);
				strcpy(path, input);
				strcat(path,"/");
				strcat(path,entry->d_name);
				lire_dossier_recursif(path);
				free(path);
			}
		}
	}
}

void lire_dossier_iteratif(char * nom)
{
	char * tableau[MAX];
	tableau[0] = nom;
	int compteur = 1;
	DIR *dp;
	struct dirent *dirp;
	for (int i=0; i < compteur; i++)
	{
		printf("%s\n",tableau[i]);
		dp = opendir(tableau[i]);
		while ((dirp = readdir(dp)) != NULL)
		{
			char * name = dirp->d_name;
			printf("%s\n", name);
			if ((dirp->d_type == DT_DIR)&&(strcmp(name ,".") != 0 )&&(strcmp(name ,"..") != 0 ))
			{
				char * path;
				path = malloc(sizeof(char)*(strlen(name)+strlen(tableau[i]))+2);
				path = strcat(path ,tableau[i]);
				path = strcat(path ,"/");
				path = strcat(path,name);
				printf("%s\n",path);
				if (compteur < MAX)
				{
					tableau[compteur] = path;
					compteur++;
				}             
			}
		}
		closedir(dp);
	}
}
