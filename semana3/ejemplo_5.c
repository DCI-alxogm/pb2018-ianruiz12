/*este es el ejemplo de diapositiva 11*/

//esta es la libreria
#include <stdio.h>

//Funcion maestra del programa
int main (){
	  //Aqui especificamos que usaremos variables de tipo entero
	  int numero1, numero2;
	  //usando printf puedes darle una orden al usuario, en este caso que de dos numero entero
	  printf("Este programa le dira si el primero numero es igual, mayor o menor respecto al segundo. Introduzca dos numeros enteros \n");
	  //con este comando la maquina recibe el valor que dio el usuario y se lo da a una variable
	  scanf("%i %i", &numero1, &numero2);
	  // pone la coondicion que si las variables son iguales mande un mensaje declarandolo
 	  if(numero1==numero2){
		              printf("Los numeros son iguales: %d = %d \n", numero1, numero2);
	                      }
	   // pone la coondicion que si la primer variables es mayor mande un mensaje declarandolo
	  else if (numero1>numero2){
		                   printf("El primer numero es mayor que el segundo %d > %d \n", numero1, numero2);
	                           }
	   // pone la coondicion que si la segunda variable es mayor mande un mensaje declarandolo
	  else{
	       printf("El primer numero es menor que el segundo: %d < %d \n", numero1, numero2);
	      }
	
	  //es para que te avise si tiene errores las insrucciones
	return 0;
}
