/*
        Jhoan Esteban Raigoza Agudelo
        Universidad Tecnologica de Pereira
        Programacion 2
        Fecha: 04.09.2020
        Programa solo con ciclo While.

*/
#include <stdio.h>

int main()
{
    int Mayor = 0;
    int menor = 0;
    int Mayor_150 = 0;
    int negativos = 0;
    float promedio_P = 0.0;
    int contador = 0;
    int num_p = 0;
    while(contador < 10)
    {
     int numero = 0;

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
         ++contador;
         }
     }
     printf("\n***Fin del Ciclo***\n");
     promedio_P = promedio_P / num_p;

     printf("\nCantidad de numeros mayores a 150: %i", Mayor_150);
     printf("\nNumero mayor: %i  Numero menor: %i", Mayor, menor);   //Fin del ciclo.
     printf("\nCantidad de numeros negativos encontrador: %i", negativos);
     printf("\nPromedio positivos encontrados: %f", promedio_P);
}

