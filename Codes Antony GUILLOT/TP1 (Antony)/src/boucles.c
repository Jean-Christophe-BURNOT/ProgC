//biblioteques
#include <stdio.h>

int compteur = 5;

int main() {
    int j;
    int i;

    for (j=0; j< compteur ; j++){

        for(i=0; i<j+1 ; i++){

            if ((i == 0)||(j==i)||(j==(compteur-1))){

                printf("*");

            }
            else {

                printf("#");

            }
            
        }

        printf("\n");
    }

return 0;
}