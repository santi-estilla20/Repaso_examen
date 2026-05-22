#include <stdio.h>

long Potencia (int num, int n);


int main ()
{
    int num, n;
    printf("Ingrese un numero entero:");
    scanf("%i", &num);
    printf("Ingrese la potencia a la cual se elevará el numero:");
    scanf("%i", &n);
    
    printf("El numero %i elevado a la potencia %i es igual a: %ld ", num, n, Potencia (num, n) );
return 0;
}

long Potencia (int num, int n)
{
    long res = 1;
    while (n > 0)
    {
        res = res * num;
        n--;
    }
    
    return res;
}
    
