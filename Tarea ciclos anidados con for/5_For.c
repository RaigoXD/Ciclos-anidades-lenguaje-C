/*
5.Hacer un programa de computador, de tal manera que presente todas las tablas de multiplicar del 1 al 10;
Resolvere este problema con dos ciclos anidados

        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo For.

*/
#include <stdio.h>

int main()
{
    printf("\nEste programa Muestra todas las tablas de multiplicar de base 10\n");
    for(int i = 1;i <= 10; ++i){
        printf("\n***Tabla del %i ***", i);
	for(int j = 1;j <= 10; ++j){
            printf("\n%i X %i = %i", i , j , (j * i));
	}
    }
    return 0;

}
