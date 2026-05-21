#include <stdio.h>

int main()
{
    int a;
    int b;
    float residuo;
    
    printf("Ingrese dos numeros separados por coma:\n");
    scanf("%i, %i", &a, &b);
    
    residuo = a % b;
    printf("El residuo de dividir %i con %i es: %lf", a, b, residuo);
    
return 0;
}
    
    
