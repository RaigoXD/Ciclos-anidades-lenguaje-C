/*
  
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo For.

*/
#include <stdio.h>

int main()
{
    for(int i = 0; i < 10; ++i){
	for(int j = 1; j <= 19; ++j){
	    if(j == (1+i) || j == (19 - i))
		printf("Z");
	    else
		printf(" ");
	}
        printf("\n");
    }    
    return 0; 
}

