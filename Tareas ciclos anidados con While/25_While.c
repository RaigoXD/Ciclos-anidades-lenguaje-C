/*

        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	    Programa solo con ciclo while.

*/
#include <stdio.h>
double Fac(int N)
{
    double Factorial = 1.0;
    int i = 1;
    while(i < N){Factorial *= ++i;}
    return Factorial;
}
double Exp(int numero, int exponente)
{
    double Total = 1;
    int i = 0;
    while(i < exponente)
    {
	Total *= numero;
    ++i;
    }
    return Total;
}
//Funciones para calcular factorial y exponente.

int main()
{
    int X = 0;
    int veces = 0;
    printf("\nPrograma para calcular sen(X) mediante sumas de Taylor\nIngresa X:");
    scanf("%i", &X);
    printf("\nIngrse el numero de sumas: ");
    scanf("%i", &veces);
    double Suma_total = 0.0;
    int i=1;
    while(i <= veces){
        if(i%2 == 0)
            Suma_total += Exp(X, (i*2)+1) / Fac((i*2)+1);
	    else
	        Suma_total -= Exp(X, (i*2)+1) / Fac((i*2)+1);
        ++i;
    }
    printf("sen(%i) es igual a %lf", X, (Suma_total + X));

    return 0;
}