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
    int i = 1;
    int j = 1;
    int k = 1;
    for(i = 1; i < 10; ++i){
	if(k == 3){
	    printf("\n %i %i %i", i, j, k);
	    ++j;
	    k = 1;
	}else{
            printf("\n %i %i %i", i, j, k);
	    ++k;
	}
    }
    return 0;

}

