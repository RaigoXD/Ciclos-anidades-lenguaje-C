#include <stdio.h>

double Fac(double num) // funcion para calcular los factoriales
{
        if(num == 1)
                return 1;
        else
                return num * Fac(num - 1);
}

double Exp(int Exponente, double numero)
{
        if(Exponente == 1){
                return numero;
        }else{
                return numero * Exp(--Exponente, numero);
        }
}


//----------------------------Funciones precreadas para calculos-------------------

void cos(int contador,int iteraciones, double suma, double X);


int main()
{
        double X;
	int  I;
        printf("Programa para calcular cos(X) mediante sumas de taylor \nIngresa X: ");
        //scanf("%lf%i", &X, &I);
	scanf("%lf", &X);
	//printf("El numero %lf elevado a %i es igual a %lli su tamanno en bytes es %d",X,I,Exp_int(1,X,I,1), sizeof(Exp_int(1,X,I,1)));
	cos(1,50,0,X); // El segundo parametro es la cantidad de sumas que se efectuaran.
        return 0;
}

void cos(int contador, int iteraciones, double suma, double X)
{
	if(contador <= iteraciones){	
		if(contador%2 == 0){
			printf("\n%i -> %lf / %0.0lf = %0.6lf", contador, Exp(contador*2,X), Fac(contador * 2), Exp(contador*2,X) / Fac(contador * 2));

			suma = suma + (Exp(contador*2,X) / Fac(contador * 2));
			printf("   Suma Actual: %lf", suma);
			cos(++contador, iteraciones,suma,X);
		}else{
			printf("\n%i -> %lf / %0.0lf = %0.6lf", contador, Exp(contador*2,X), Fac(contador * 2), Exp(contador*2,X) / Fac(contador * 2));
			suma = suma - (Exp(contador*2,X) / Fac(contador * 2));
			printf("  Suma Actual: %lf", suma);
			cos(++contador, iteraciones,suma,X);
		}
	}else{
		printf("\nCos(%lf) es igual a: %lf", X, (suma + 1));
	}
}
