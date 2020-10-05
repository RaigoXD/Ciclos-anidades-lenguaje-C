/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
        Programa solo con ciclos do while.
*/
#include <stdio.h>

int main()
{
    printf("Este programa Imprime los digitos menores a 100 de la sucesion de fibonaci y su suma\n");
    int a= 0;
    int b = 1;
    int suma = 0;
    int i = 0;
    
    do
    {
        suma += i;
        a = b;
        b = i;
        printf("%i,", i);
	    i = a+b;
    }while(i < 100);
    printf("El resultado de la suma es igual a = %i", suma);
    return 0;
}

