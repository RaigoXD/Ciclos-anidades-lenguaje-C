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
    char letra;
    for(int i = 0; i< 7;++i){
        for(int j = 0; j <= 13; ++j){
            if(j >= (1 + i) && j <= (13-i))
                printf("%c", 'P');
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

