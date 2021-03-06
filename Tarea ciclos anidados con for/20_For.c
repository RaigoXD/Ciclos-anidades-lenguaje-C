/*
        P/ Hacer mediante sumas de Taylor la Funcion e^x.

        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo For.

*/
#include <stdio.h>
double Fac(int N)
{
    double Factorial = 1.0;
    for(int i = 1;i < N; Factorial *= ++i);
    return Factorial;
}
double Exp(int numero, int exponente)
{
    double Total = 1;
    for(int i = 0; i < exponente; ++i)
    {
	Total *= numero;
    }
    return Total;
}
//Funciones para calcular factorial y exponente.

int main()
{
    int X = 0;
    int veces = 0;
    printf("\nPrograma para calcular Euler elevado a X mediante sumas de Taylor\nIngresa X:");
    scanf("%i", &X);
    printf("\nIngrse el numero de sumas");
    scanf("%i", &veces);
    double Suma_total = 0.0;
    for(int i = 1; i <= veces; ++i){
        Suma_total += (Exp(X,i) / Fac(i));
    }
    printf("e^%i es igual a %lf", X, (Suma_total + 1.0));

    return 0;
}

