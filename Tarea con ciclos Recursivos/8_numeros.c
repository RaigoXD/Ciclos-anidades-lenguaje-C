/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 22.09.2020

*/
#include <stdio.h>

void numeros(int contador1, int contador2);

int main()
{
	numeros(0,0);
	return 0;
}

void numeros(int contador1, int contador2)
{
	if(contador1 < 10){
		if(contador1%2 == 0){
			++contador2;
			printf("\n%i %i", contador1,contador2);
			numeros(++contador1,contador2);
		}else{
			printf("\n%i %i", contador1,contador2);
			numeros(++contador1,contador2);
		}
	}
}
