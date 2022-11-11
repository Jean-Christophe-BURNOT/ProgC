#include <stdio.h>

/*
* Script pour vérifier si un entier d a ses 4e et 20e bits 
* (en partant de la gauche) à 1.
* Il affiche 1 si c'est le cas et 0 sinon
*/

int main() {
	int d = 536870911;

	// mask: 0001 0000, 0000 0000, 0001 0000, 0000 0000
	// corresponding int: 268 349 552
	
	int mask =  (1 << (sizeof(d) * 8 - 5)) +
				(1 << (sizeof(d) * 8 - 21));
	
	//printf("Mask:\t");
	//showbits(mask);

	printf("%i\n", (d & mask == mask));

	return 0;
}