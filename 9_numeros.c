#include <stdio.h>

void numeros(int contador1, int contador2, int contador3)
{
	if(contador1 < 10){
		if(contador3 == 3){
			printf("\n%i %i %i", contador1,contador2,contador3);
			numeros(++contador1,++contador2,1);
		}else{
			printf("\n%i %i %i", contador1,contador2,contador3);
			numeros(++contador1,contador2,++contador3);

		}
	}
}



int main()
{
	numeros(1,1,1);
	return 0;

}
