#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int precio_base, kilometros;
    float consumo, precio_final;
    printf("Introduce el precio base del vehículo\n");
    scanf("%d",&precio_base);
    printf("Introduce los kilómetros\n");
    scanf("%d",&kilometros);
    printf("Introduce el consumo\n");
    scanf("%f",&consumo);

    if (kilometros<20000 && consumo<=5) {
        precio_final = precio_base*1.2;
    }
    else if (kilometros>20000 && consumo<=5) {
        precio_final = precio_base*1.1;
    }
    else if (consumo>5) {
        precio_final = precio_base*1.05;
    }
    printf("El precio final del vehículo es: %.2f",precio_final);
}