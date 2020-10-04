/*
        6.Hacer un programa de computador, de tal manera que, lea un número e imprima su factorial.
	Con un ciclo for, calculare el factorial.

        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo For.

*/
#include <stdio.h>

int main()
{
    int numero = 0;
    printf("Programa calcula el factorial de un numero\nIngresa un numero: ");
    scanf("%i",&numero);
    double Factorial = 1.0;
    int i;
    for(i = 1;i < numero; Factorial *= ++i); //Calculo el factorial 
    printf("\n%i! es igual a %lf", numero, Factorial);
    return 0;
}
