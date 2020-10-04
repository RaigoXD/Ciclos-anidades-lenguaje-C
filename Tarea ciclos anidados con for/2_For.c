/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclos For.
*/
#include <stdio.h>

int main()
{
    printf("Este programa Imprime los digitos menores a 100 de la sucesion de fibonaci y su suma\n");
    int a= 0;
    int b = 1;
    int suma = 0;
    for(int i = 0; i < 100; i = a + b){
        suma += i;
	a = b;
	b = i;
	printf("%i,", i);
    }
    printf("El resultado de la suma es igual a = %i", suma);
    return 0;
}
