#include <stdio.h>
/*
 * Code qui affecte et affiche
 * les valeurs des variables des différents types de base
 */

int main()
{
    //Definition des variables
    unsigned char a = '7';
	unsigned short c = 6969;
	signed short d = -6969;
	unsigned int e = 696969;
	signed int f = -696969;
	unsigned long int g = 69696969;
	signed long int h = -69696969;
	unsigned long long int i = 6969696969;
	signed long long int j = -6969696969;
	float k = 3.1469;
	double l = 93333399.27878;
	long double m = 9932456789099.2782782;

    //affichage des variables
	printf("%c \n",a);
	printf("%u \n",c);
	printf("%i \n",d);
	printf("%u \n",e);
	printf("%d \n",f);
	printf("%lu \n",g);
	printf("%ld \n",h);
	printf("%llu \n",i);
	printf("%lli \n",j);
	printf("%f \n",k);
	printf("%f \n",l);
	printf("%Lf \n",m);
    return 0;
}
