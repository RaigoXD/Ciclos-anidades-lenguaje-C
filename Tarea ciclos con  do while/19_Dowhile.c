/*
  
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo do While.

*/
#include <stdio.h>

void Columna(int pibote)
{
    int j = 0;
    do{
	    if(j >= 40 - pibote)
	        printf("A");
	    else
    	    printf(" ");
    ++j;
    }while(j <= 40);
}


int main()
{
    int contador1 = 0;
    int contador2 = 10;
    do
    {
	    if(contador1 > 5)
            Columna(contador2);
	    else
	        Columna(contador1);
	    --contador2;
	    printf("\n");
        ++contador1;
    }while(contador1 < 11);
    return 0;
}