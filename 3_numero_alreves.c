#include <stdio.h> 

void reves(int numero) // Funcion Reves para imprimir un numero alrevez.
{
	if(numero != 0){
		printf("%i", numero%10);
		reves(numero/10);
	}
}



int main()
{
	int dato = 0;
	printf("Este programa lee desde el teclado un numero entero y lo imprime al reves.\nIngrese el numero: ");
	scanf("%i", &dato);


	reves(dato);
	return 0;
}

