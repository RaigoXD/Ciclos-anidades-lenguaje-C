#include <stdio.h>

double Fac(double num) // funcion para calcular los factoriales
{
        if(num == 1)
                return 1;
        else
                return num * Fac(num - 1);
}

double Exp(int Exponente, double numero) // Funcion para calcular el exponente de un numero.
{
        if(Exponente == 1){
                return numero;
        }else{
                return numero * Exp(--Exponente, numero);
        }
}


//----------------------------Funciones precreadas para calculos-------------------


void E(int contador, int iteraciones,double suma, double X);


int main()
{
        double X;
	int Numero_iteraciones;
        printf("Programa para calcular Euler elevado a X me diante sumas de Taylor\nIngresa X: ");
        scanf("%lf", &X);
        //printf("El factorial de %lf es %lf y su tamanno en bytes es %d", X, Fac(X), sizeof(Fac(X)));
        E(1,30,0,X);
        return 0;
}

void E(int contador, int iteraciones,double suma, double X)
{
        if(contador <= iteraciones){
                printf("\n->%i %0.0lf / %0.0lf = %0.6lf",contador,Exp(contador,X),Fac((contador + 0.0)), Exp(contador,X) / (Fac(contador) + 0.0));
                suma = suma + Exp(contador,X) / (Fac(contador));
                printf("\tSuma por el momento: %0.6lf\n", suma);
                E(++contador,iteraciones,suma,X);
        }else{                
		printf("\nEl resultado de e^%0.0lf es: %lf",X , (suma + 1.0));
        }
}


