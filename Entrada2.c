#include <stdio.h>

void main ()
{
    int a;
    int b;
    int c;
    
    printf("Escriba el valor de tres números separados por coma:\n");
    scanf("%i,%i,%i",&a,&b,&c);
    
    printf("La suma de los número es: %i", a+b+c);
}
