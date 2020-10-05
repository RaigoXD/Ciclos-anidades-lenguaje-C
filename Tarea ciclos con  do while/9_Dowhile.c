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
    int i = 1;
    int j = 1;
    int k = 1;
    do{
        if(k == 3){
            printf("\n %i %i %i", i, j, k);
            ++j;
            k = 1;
        }else{
            printf("\n %i %i %i", i, j, k);
            ++k;
        }
	++i;
    }while(i < 10);
    return 0;

}