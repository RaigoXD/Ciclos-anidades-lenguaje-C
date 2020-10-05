/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020

*/
#include <stdio.h>
#include <stdlib.h> // importo la libreria stdlib para poder hacer uso de la funcion system();
#include <unistd.h> // La libreria unistd es para poder hacer uso de la funcion sleep();

void mostrar(int X_1, int X_2, int contador);

int main()
{
    system("cls"); // La funcion system(""); me permite efectuar comandos de la consola de windows
    int contador = 1;
    int X_1 = 1;
    int X_2 = 80;
    do{
        if(contador <= 80){
            if(contador == X_1)
                printf("X");
            else if(contador == X_2)
                printf("X");
            else
                printf(" ");
         }else{
             sleep(0.4);
             system("cls");
             ++X_1;
             --X_2;
            contador = 1;
         }
	++contador;
    }while(X_1 != 41);
    return 0;
}

