/*
  
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo While.

*/
#include <stdio.h>

void Columna(int pibote)
{
    int j = 0;
    while(j <= 40){
	    if(j >= 40 - pibote)
	        printf("A");
	    else
    	    printf(" ");
    ++j;
    }
}


int main()
{
    int contador1 = 0;
    int contador2 = 10;
    while(contador1 < 11)
    {
	    if(contador1 > 5)
            Columna(contador2);
	    else
	        Columna(contador1);
	    --contador2;
	    printf("\n");
        ++contador1;
    }
    return 0;
}