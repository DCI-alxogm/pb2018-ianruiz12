/* en este se sumara uno en caso de que sea par*/

//esta es la libreria
#include<stdio.h>

/*Funcion maestra del programa*/
int main(){
	  //Aqui especificamos que usaremos variables de tipo entero
	  int a;
	  //usando printf puedes darle una orden al usuario, en este caso que de un numero entero
	  printf("introduce un numero entero, si es par se le sumara 1 \n");
	  //con este comando la maquina recibe el valor que dio el usuario y se lo da a una variable
	  scanf("%i", &a);
	  //If nos permite realizar una serie de instrucciones después de verificar que se cumpla unacondición dada
	  if(a%2==0) a=a+1;
	  // muestra lo que hace internamente if
	  //if(a%2==0) {;
	  // instrucciones
	  //}
	  //imprime en la pantalla el resultado de la variable a
	  printf("El resultado es %i\n",a);
	  //es para que te avise si tiene errores las insrucciones
	  return 0;
         }
