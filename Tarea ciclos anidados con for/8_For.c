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
    int i = 0;
    int j = 0;
    for(i = 0;i < 10;++i){
	if(i%2 == 0){
	    ++j;
	    printf("\n%i %i",i,j);
	}else{
            printf("\n%i %i",i,j);
	}
            
    }
    return 0;
}

