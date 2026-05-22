#include <stdio.h>

int main()
{
    int x;
    int y;
    
    printf("Ingrese un valor entero para x:");
    scanf("%i", &x);
    
    if (x <= 0)
    {
        y = x + 3;
        printf("La función para ese valor de x es igual a: %i", y );
    }
    
    else 
    {
        y = (x*x) + 2*x;
        printf("La función para ese valor de x es igual a: %i", y );
    } 
      
    return 0;
}
    
