#include <stdio.h>

int Maximo (int num1, int num2);

int main ()
{
    int num1, num2;
    printf("Ingrese dos numeros enteros positivos separados por coma:\n");
    scanf("%i,%i", &num1, &num2);
    
    printf("El valor maximo es: %i", Maximo (num1, num2));
return 0;
}

int Maximo (int num1, int num2)
{
    int max;
    
    if (num1 > num2)
    {
      max = num1;
    }
    else
    {
        max = num2;
    }
    
    return max;
}
    
