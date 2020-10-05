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
    int a = 0;
    int b = 1;
    int i = 0;
    printf("0,");
    while(i < 10000)
    {
        printf("%i,", b);
	i = a + b;
        a = b;
        b = i;
    }
    return 0;
}


