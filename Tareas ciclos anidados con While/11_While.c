/*
  
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	    Programa solo con ciclo while.

*/
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    while(i < 25){
        j = 0;
	    while(j < 80){
            if(j > (80 - i))
                printf("A");
	        else
		        printf(" ");
            ++j;
	    }
	    printf("\n");
        ++i;
    }
    return 0;
}