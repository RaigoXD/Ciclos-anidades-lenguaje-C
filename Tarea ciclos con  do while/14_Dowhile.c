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
    char letra;
    int j = 0;
    int i = 0;
    do{
        j = 0;
        do{
            if(j >= (1 + i) && j <= (13-i))
                printf("%c", 'P');
            else
                printf(" ");
            ++j;
        }while(j <= 13);
        printf("\n");
        ++i;
    }while(i< 7);
    return 0;
}