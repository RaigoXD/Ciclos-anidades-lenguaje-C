/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020

*/
#include <stdio.h>



int main()
{
    int dato = 0;
    printf("Este programa lee desde el teclado un numero entero y lo imprime al reves.\nIngrese el numero: ");
    scanf("%i", &dato);
    for(int numero = dato; numero != 0;numero = numero/10)
    {
        printf("%i", dato%10);
	dato = dato / 10;
    }    
    return 0;
}

