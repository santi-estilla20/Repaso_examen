#include <stdio.h>

void main()
{
    double base;
    double altura;
    double area;
    
    base = 0, altura = 0, area = 0;
    
    printf("Ingrese la altura del rectangulo:\n");
    scanf("%lf",&altura);
    printf("Ingrese la base del rectangulo:\n");
    scanf("%lf",&base);
    area = (base*altura)/2;
    printf("Un triangulo rectangulo de altura %lf y base %lf, tiene un area de %.2lf", altura,base,area);

}
    
