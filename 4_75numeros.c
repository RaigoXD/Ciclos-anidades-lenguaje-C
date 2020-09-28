#include <stdio.h>

void Pedir_numeros(int Mayor, int menor, int Mayor_150, int negativos,int promedio_P, int contador, int num_p)
{
	int numero = 0;
	if(contador <= 10){
		printf("\nIngrese por favor el numero: ");
		scanf("%i", &numero);
		if(numero != 0){
			if(numero > 150){
				++Mayor_150;    //Mayor a 150
			}

			if(numero > Mayor){
				Mayor = numero;    //Numero mayor al mayor anterior
			}else if(numero < menor){   
				menor = numero;    //Numero menor al menor anterior
			}

			if(numero > 0){
				++num_p;
				promedio_P += numero; //Si es positivo
			}else{
				++negativos;          //Si es negativo
			}
			Pedir_numeros(Mayor,menor,Mayor_150,negativos,promedio_P,++contador,num_p);
		}else{
			Pedir_numeros(Mayor,menor,Mayor_150,negativos,promedio_P,contador,num_p);
		}
	}else{
		printf("\n***Fin del Ciclo***\n");
		promedio_P = promedio_P / num_p;

		printf("\nCantidad de numeros mayores a 150: %i", Mayor_150);
		printf("\nNumero mayor: %i  Numero menor: %i", Mayor, menor);   //Fin del ciclo.
		printf("\nCantidad de numeros negativos encontrador: %i", negativos);
		printf("\nPromedio positivos encontrados: %i", promedio_P);
	}
}


int main()
{
	Pedir_numeros(0,0,0,0,0,1,0); //Llamo a la funcion.
	return 0;
}
