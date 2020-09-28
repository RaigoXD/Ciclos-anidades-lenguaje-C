/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 22.09.2020

*/
#include <stdio.h>

void Columna(int contador, int pibote);
void Filas(int contador);

int main()
{
        Filas(0);
        return 0;
}

void Columnas(int contador, int pibote){
	if(contador <= 46){
		if(contador >= (34 + pibote) && contador <= (46 - pibote))
			printf("P");
		else
			printf(" ");
		Columnas(++contador, pibote);
	}
}

void Filas(int contador)
{
	if(contador < 7){
		Columnas(0, contador);
		printf("\n");
		Filas(++contador);
	}
}
