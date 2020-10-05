/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
        Programa solo con ciclo do swhile.

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
    do{  // Ciclo para ir avanzando en los factoriales del 1 al N-termino
        Factorial = 1.0;
	i = 1;
        do{Factorial *= ++i;}while(i < j); //Calculo el factorial
        printf("%lf + ", Factorial);
        total += Factorial;
	++j;
    }while(j <= numero);
    printf("\nLa suma de los factoriales de %i es igual a %lf", numero, total);
    return 0;
}