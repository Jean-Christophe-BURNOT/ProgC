#define MX_BITS 16
#include <stdio.h>
/*
 * Code pour convertir un chiffre
 * décimal en binaire en passant
 * par les masques
 */

int main(void)
{
    int num = 12;
    for (int i=MX_BITS-1; i>=0; i--)
    {
        printf("%i", (int)(((1<<i) & num)>>i));
    }
    printf("\n");
}
