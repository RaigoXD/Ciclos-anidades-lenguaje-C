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
    int j = 1;
    int i = 0;
    do{
        j = 1;
	    while(j <= 19){
            if(j == (1+i) || j == (19 - i))
		        printf("Z");
	        else
		        printf(" ");
            ++j;
	    }
        printf("\n");
        ++i;
    }while(i < 10);    
    return 0; 
}