#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Ingrese dos numeros enteros separados por coma:");
    scanf("%i, %i", &num1, &num2);
    
    if ( num1 % num2 == 0)
    {
        printf("El numero %i SÍ es divisible entre %i", num1, num2);
    }
    
    else
    {
        printf("El numero %i NO es divisible entre %i", num1, num2);
    }
        
    return 0;
}
    
