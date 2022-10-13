#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
* Code de la dichotomie, on dichotomise
* La solution de l'équation 10-piX=0 c'est à dire
* 10/pi
*/
int main()
{
	float a,b,c,n;
	//bornes de départ
	a = 2.0;
	b = 4.0;
	//Précision
	n = 0.01;
	while (fabs(b-a) > n)
	{
		c = a+(b-a)/2;
		// la fonction est décroissante
		if ((10-M_PI*c) < 0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
	}
	printf("Les bornes sont a:%f et b:%f \n",a,b);
	return 0;
}
