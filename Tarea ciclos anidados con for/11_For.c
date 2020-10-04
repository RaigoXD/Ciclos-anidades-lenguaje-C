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
    for(int i = 0; i < 25; ++i){
	for(int j = 0; j < 80;++j){
            if(j > (80 - i))
                printf("A");
	    else
		printf(" ");
	}
	printf("\n");
    }
    return 0;

}
