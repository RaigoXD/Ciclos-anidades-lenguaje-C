#include <stdio.h>

void fibo(int a, int b, int c, int Suma)
{
	if(b < 100){
		c = a + b;
		a = b;
		b = c;
		Suma = Suma + a;
		printf("%i,", a);
		fibo(a,b,c,Suma);
	}else{
		printf("\nSuma-> %i", Suma);
	}
}

int main()
{
	printf("Este programa Imprime los digitos menores a 100 de la sucesion de fibonaci y su suma\n");
	fibo(0,1,0,0);
	return 0; 

}
