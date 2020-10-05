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
    int i = 0;
    int j;
    do{
        j = 0;
        do{
            if(j >= (34 + i) && j <= (46-i))
                printf("%c", 'P');
            else
                printf(" ");
            ++j;
        }while(j <= 46);
        printf("\n");
        ++i;
    }while(i< 7);
    return 0;
}
