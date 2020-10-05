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
    do
    {
        j = 1;
	    do
	    {
	        if(j == 1 + (9- i) || j == (19 - (9- i)))
		        printf("Z");
	        else
		        printf(" ");
            ++j;
	    }while(j <= 19 );
	    printf("\n");
        ++i;
    }while(i < 10 );
    return 0;
}
