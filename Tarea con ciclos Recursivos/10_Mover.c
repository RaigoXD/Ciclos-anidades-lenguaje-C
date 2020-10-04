/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 22.09.2020

*/
#include <stdio.h>
#include <stdlib.h> // importo la libreria stdlib para poder hacer uso de la funcion system(); 
#include <unistd.h> // La libreria unistd es para poder hacer uso de la funcion sleep();

void mostrar(int X_1, int X_2, int contador);

int main()
{
	system("cls"); // La funcion system(""); me permite efectuar comandos de la consola de windows
	mostrar(1,80,1);
	return 0;
}

void mostrar(int X_1, int X_2, int contador)
{
	if(X_1 != 41){
		if(contador <= 80){
			if(contador == X_1)
				printf("X");
			else if(contador == X_2)
				printf("X");
			else
				printf(" ");
			mostrar(X_1,X_2, ++contador);
		}else{
			sleep(0.4);
			system("cls");
			mostrar(++X_1, --X_2, 1);
		}
	}	
}
