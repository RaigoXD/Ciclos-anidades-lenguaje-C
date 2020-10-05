/*
  
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	    Programa solo con ciclo do while.

*/
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    do{
        j = 0;
	    do{
            if(j > (80 - i))
                printf("A");
	        else
		        printf(" ");
            ++j;
	    }while(j < 80);
	    printf("\n");
        ++i;
    }while(i < 25);
    return 0;
}