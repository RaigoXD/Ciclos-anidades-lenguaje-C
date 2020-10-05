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
        if(i%2 == 0){
            ++j;
            printf("\n%i %i",i,j);
        }else{
            printf("\n%i %i",i,j);
        }
	++i;
    }while(i < 10);
    return 0;
}