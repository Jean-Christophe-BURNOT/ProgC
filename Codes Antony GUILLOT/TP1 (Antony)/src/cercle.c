//biblioteques
#include <stdio.h>


int rayon = 1; 

int main() {
    
    const float PI = 3.1415926535897932;

    float aire =PI*rayon*rayon;
    float perimetre = 2*PI*rayon;
    printf("Voici l'aire du cercle %f\n",aire );
    printf("Voici le perimetre du cercle %f\n",perimetre );  

return 0;
}