/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
        Programa solo con ciclo while

*/
#include <stdio.h>

int main()
{
    printf("\nEste programa Muestra todas las tablas de multiplicar de base 10\n");
    int i = 1;
    int j = 1;
    while(i <= 10){
        printf("\n***Tabla del %i ***", i);
	j = 1;
        while(j <= 10){
            printf("\n%i X %i = %i", i , j , (j * i));
            ++j;
	}
	++i;
    }
    return 0;

}

