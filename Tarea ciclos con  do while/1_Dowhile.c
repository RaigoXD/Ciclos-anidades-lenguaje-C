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
    int a = 0;
    int b = 1;
    int i = 0;
    printf("0,");    
    do
    {
        printf("%i,", b);
	    i = a + b;
        a = b;
        b = i;
    }while(i < 10000);
    return 0;
}

