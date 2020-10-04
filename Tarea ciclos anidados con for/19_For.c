/*
  
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo For.

*/
#include <stdio.h>

void Columna(int pibote)
{
    for(int j = 0; j <= 40; ++j){
	if(j >= 40 - pibote)
	    printf("A");
	else
    	    printf(" ");
    }
}


int main()
{
    int contador1 = 0;
    int contador2 = 10;
    for(contador1 = 0; contador1 < 11; ++contador1){
	if(contador1 > 5)
            Columna(contador2);
	else
	    Columna(contador1);
	--contador2;
	printf("\n");
    }
    return 0;
}

