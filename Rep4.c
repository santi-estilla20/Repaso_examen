#include <stdio.h>

int main()
{
    int num, suma, acumulador;
    
    num = 0;
    suma = 0;
    acumulador = 0;
    do
    {
    printf ("Introduce un numero: ");
    scanf ("%i",&num);
    printf ("Has introducido el numero: %i\n", num);
    suma = num + suma;
    acumulador = acumulador + 1;
    
    }
    while (num != 0);
    
    printf("Finalizando: Se ha introducido el numero 0.\n");
    printf("Se han introducido %i numeros: \n", acumulador);
    
    printf("Su suma es %i", suma);
    
return 0;
}
    
