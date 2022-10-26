#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "repertoire.h"
/*
 * Code qui parcours un répertoire saisi par l'utilisateur
 */

int main()
{
	char input[256];
	printf("Repertoire à afficher (Chemin absolu)\n");
	scanf("%s", input);
	lire_dossier_recursif(input);
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

void lire_dossier_iteratif
