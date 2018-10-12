/*En este ejemplo se ingresa un número al programa y se transformara en su cuadrado gracias a una función que tiene argumentos de entrada y de salida.*/


#include<stdio.h>
float cuadrado(float h); //se declara la funcion cuadrado
int main(){
           float x, x2;
           printf("Introduce un número: \n");
	   scanf("%f", &x);
	   x2=cuadrado(x);
	   printf("El cuadrado de %f es %f \n", x, x2);
           return 0;
	   }
 	   float cuadrado(float h){ //diremos que hace la funcion cuadrado que es multiplicar por si mismo 
           return h*h;
           }

