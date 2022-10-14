//biblioteques
#include <stdio.h>

int compteur = 3;
int nombre = 1000;

int main() {
    int i;
    int j;


    for (i=0; i< compteur ; i++){
        if (i==0){

            printf("qui est divisible par 2 et 15 ? \n\n");

            for (j=0; j<= nombre ; j++){

                if (((j%2) ==0)&&((j%15) ==0)){

                    printf("%i est divisible par 2 et 15 \n", j);
                }

            }
        
        }
        if (i==1){

            printf("qui est divisible par 103 ou 107 ? \n\n");

            for (j=0; j<= nombre ; j++){

                if (((j%103) ==0)||((j%107) ==0)){

                    printf("%i est divisible par 103 ou 107 \n", j);
                }

            }


        }

        printf("\n");

        if (i==1){

            printf("qui est divisible par 7 ou 5, mais pas par 3 ? \n\n");

            for (j=0; j<= nombre ; j++){

                if ((((j%5) ==0)||((j%7) ==0))&&((j%3) != 0)){

                    printf("%i est divisible par 7 ou 5, mais pas par 3  \n", j);
                }

            }


        }

    printf("\n");
        
    }

return 0;
}