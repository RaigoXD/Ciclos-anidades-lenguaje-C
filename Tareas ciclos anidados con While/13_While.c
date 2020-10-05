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
    int i = 0;
    int j;
    while(i< 7){
        j = 0;
        while(j <= 46){
            if(j >= (34 + i) && j <= (46-i))
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
