/*En este ejemplo se ingresara un numero y se tranformara en su cuadrado gracias a una funcion que no tiene argumento de entrada pero si tiene de salida.*/


#include<stdio.h>
void cuadrado(); //se declara la funcion cuadrado
int main(){
           cuadrado();
	   return 0;
	   }
void cuadrado(){ //se indicara que hara la función
	       float x, x2;
	       printf("introduce un numero: \n");
	       scanf("%f", &x);
	       x2=x*x;
	       printf("El cuadrado de %f es %f \n", x, x2);
               }
