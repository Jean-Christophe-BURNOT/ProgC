#include <stdio.h>
/*
 * Permet d'afficher la taille des pointeurs
 */

int main() {
		
	printf("int: %lu\n", 		sizeof(int));
	printf("int*: %lu\n", 		sizeof(int *));
	printf("int**: %lu\n", 		sizeof(int **));
	printf("char*: %lu\n", 		sizeof(char*));
	printf("char**: %lu\n", 	sizeof(char**));
	printf("char***: %lu\n",	sizeof(char***));
	printf("float*: %lu\n", 	sizeof(float*));
	printf("float**: %lu\n", 	sizeof(float**));
	printf("float***: %lu\n", 	sizeof(float***));
	
	return 0;
}
