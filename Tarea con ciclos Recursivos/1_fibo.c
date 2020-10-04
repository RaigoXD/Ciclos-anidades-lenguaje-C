/*
	Jhoan Esteban Raigoza Agudelo              
	Universidad Tecnologica de Pereira    
	Programacion 2
	Fecha: 22.09.2020

*/
#include <stdio.h>

void fibo(int a, int b, int c)
{
	if(c < 10000)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%i,",a);
		fibo(a,b,c);
	}
}


int main()
{
	printf("0,");
	fibo(0,1,0);
	return 0;
}

