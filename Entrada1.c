#include <stdio.h>

void main ()
{
    int fecha;
    printf("Hola\n");
    printf("Por favor ingrese el año en que nació\n");
    scanf ("%i",&fecha);
    printf("Si usted nació en %i, este año cumple %i",fecha, 2026 - fecha);
}

    
