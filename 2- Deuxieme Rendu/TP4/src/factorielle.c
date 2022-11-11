#include <stdio.h>
#include <stdlib.h>
/*
 * Code récursif qui calcule la fonction factorielle
 */

int factorielle (int num)
{
	if (num == 0)
	{
		return 1;
	}
	else 
	{
		return (num * factorielle (num-1));
	}
}

int main(int argc, char **argv)
{
	//Pour enlever le warning
	argc++;
	int n = atoi(argv[1]);
	printf("Voici le factorielle de %d: %d",n,factorielle(n));
	return 0;
}

