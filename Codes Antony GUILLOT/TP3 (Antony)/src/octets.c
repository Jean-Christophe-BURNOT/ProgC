//biblioteques
#include <stdio.h>

int main() 
{ 
    short s = 12;
    char *my_short_var = (char*)&s;
    printf("Short : %x %x \n",*(my_short_var+1), *(my_short_var) );


    int i = 12;
    char *my_int_var = (char*)&i;
    printf("Int : %x %x %x %x  \n",*(my_int_var+3), *(my_int_var+2),*(my_int_var+1), *(my_int_var) );

    
    long l = 1234553L;
    char *my_long_var = (char*)&l;
    printf("Short : %x %x %x %x   \n",*(my_long_var+3), *(my_long_var+2),*(my_long_var+1), *(my_long_var) );


    float f = 3.14;
    char *my_float_var = (char*)&f;
    printf("Short : %x %x %x %x \n",*(my_float_var+3), *(my_float_var+2),*(my_float_var+1), *(my_float_var) );


    double d = 3.14E-12;
    char *my_double_var = (char*)&d;
    printf("Short : %x %x %x %x %x %x %x %x \n",*(my_double_var+7), *(my_double_var+6),*(my_double_var+5), *(my_double_var+4),*(my_double_var+3), *(my_double_var+2),*(my_double_var+1), *(my_double_var) );


    long double ld = 3.14E-2;
    char *my_long_double_var = (char*)&ld;
    printf("Short : %x %x %x %x %x %x %x %x %x %x \n",*(my_long_double_var+9), *(my_long_double_var +8),*(my_long_double_var+7), *(my_long_double_var+6),*(my_long_double_var+5), *(my_long_double_var+4),*(my_long_double_var+3), *(my_long_double_var+2),*(my_long_double_var+1), *(my_long_double_var));


     return 0;
    
}

