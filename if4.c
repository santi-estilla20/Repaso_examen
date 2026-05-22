#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Ingrese dos numeros enteros separados por coma:");
    scanf("%i,%i", &num1,&num2);
    
    if ( num1 == num2)
    {
        printf("Ambos numeros son iguales");
    }
    
    else 
    {
        if (num1 > num2)
        {
            printf("El primer numero es mayor al segundo");
        }
        else
        {
         printf("El segundo numero es mayor al primero");   
        }
    } 
      
    return 0;
}
    
