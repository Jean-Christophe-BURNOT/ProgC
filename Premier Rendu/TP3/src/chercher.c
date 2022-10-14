#include <stdio.h>
/*
* Ce code est un mécanisme qui cherche si un string est présent dans un tableau
*/

int main()
{
	char titre[50] = "Hey Joe"
	//On fait un tableau de 10 éléments qui font 50 caractères au maximum
	char str[10][50] = {"Voodoo Chile", "Purple Haze", "Bold as Love","All along the Watchtower","Foxey Lady","Hear my train coming","Little Wings","Electric Ladyland","Castle made of Sand","Hey Joe"}
	int index = -1;
	for (int i=0, i<=9, i++)
	{
		for (int j=0, j<=50, j++)
		{
			if (str[i][j]!=titre[j])
			{
				continue
			}
			else
			{
				break
			}
		}
	}
	return 0;
}
