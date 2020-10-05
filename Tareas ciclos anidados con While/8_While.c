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
    while(i < 10){
        if(i%2 == 0){
            ++j;
            printf("\n%i %i",i,j);
        }else{
            printf("\n%i %i",i,j);
        }
	++i;
    }
    return 0;
}
