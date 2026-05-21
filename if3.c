#include <stdio.h>

int main()
{
    int num1;
    
    printf("Ingrese un numero entero:");
    scanf("%i", &num1);
    
    if ( num1 % 2 == 0)
    {
        printf("El numero %i es par", num1);
    }
    
    else
    {
        printf("El numero %i es impar", num1);
    }
        
    return 0;
}
    
