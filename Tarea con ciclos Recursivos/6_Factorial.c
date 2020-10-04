/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 22.09.2020

*/

#include <stdio.h>

double factorial(double numero);

int main()
{
	double numero = 0;
	printf("Programa calcula el factorial de un numero\nIngresa un numero: ");
	scanf("%lf",&numero);
	
	printf("El factorial de %0.0lf es %0.0lf",numero,factorial(numero));
	return 0;

}

double factorial(double numero)
{
	if(numero==1){
		return 1;
	}else{
		return numero * factorial(numero - 1);	
	}
}
