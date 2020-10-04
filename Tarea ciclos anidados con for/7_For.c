/*
        7.Hacer un programa de computador, de tal manera que, lea un número entero N, no negativo(validar esto)
	y mostrar la suma de los factoriales de todos los números desde 0 hasta N..Hacer un programa de computador, 
	de tal manera que, lea un número e imprima su factorial.
        
	R/Con un ciclo for, calculare los factoriales este ciclo estara dentro de otro que me sumara todos estos resultados

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
    int j;
    double total = 0.0;
    for(j = 1; j <= numero; ++j){  // Ciclo para ir avanzando en los factoriales del 1 al N-termino 
	Factorial = 1.0;
        for(i = 1;i < j; Factorial *= ++i); //Calculo el factorial
        printf("%lf + ", Factorial);
	total += Factorial; 
    }
    printf("\nLa suma de los factoriales de %i es igual a %lf", numero, total);
    return 0;
}

