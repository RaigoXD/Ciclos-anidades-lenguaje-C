/*
  
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
	Programa solo con ciclo For.

*/
#include <stdio.h>

int main()
{
    char letra;
    for(int i = 0; i< 7;++i){
	switch (i){
            case 0: letra = 'P';break;
            case 1: letra = 'N';break;
            case 2: letra = 'L';break;
            case 3: letra = 'J';break;
            case 4: letra = 'H';break;
            case 5: letra = 'F';break;
            case 6: letra = 'D';break;
	}
	for(int j = 0; j <= 13; ++j){
	    if(j >= (1 + i) && j <= (13-i))
	        printf("%c", letra);
	    else
		printf(" ");
	}
        printf("\n");
    }
    return 0; 
}
