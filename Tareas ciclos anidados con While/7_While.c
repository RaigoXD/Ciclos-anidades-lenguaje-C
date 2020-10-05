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
    int i;
    int j = 1;;
    double total = 0.0;
    while(j <= numero){  // Ciclo para ir avanzando en los factoriales del 1 al N-termino
        Factorial = 1.0;
	i = 1;
        while(i < j){Factorial *= ++i;} //Calculo el factorial
        printf("%lf + ", Factorial);
        total += Factorial;
	++j;
    }
    printf("\nLa suma de los factoriales de %i es igual a %lf", numero, total);
    return 0;
}

