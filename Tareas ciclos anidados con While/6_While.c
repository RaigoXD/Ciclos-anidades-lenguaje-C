/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
        Programa solo con ciclo while.

*/
#include <stdio.h>

int main()
{
    int numero = 0;
    printf("Programa calcula el factorial de un numero\nIngresa un numero: ");
    scanf("%i",&numero);
    double Factorial = 1.0;
    int i = 1;
    while(i <= numero){ //Calculo el factorial
	Factorial *= i++;
    }
    printf("\n%i! es igual a %lf", numero, Factorial);
    return 0;
}

