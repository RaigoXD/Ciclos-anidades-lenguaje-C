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
    char letra;
    int j = 0;
    int i = 0;
    while(i< 7){
        j = 0;
        while(j <= 13){
            if(j >= (1 + i) && j <= (13-i))
                printf("%c", 'P');
            else
                printf(" ");
            ++j;
        }
        printf("\n");
        ++i;
    }
    return 0;
}