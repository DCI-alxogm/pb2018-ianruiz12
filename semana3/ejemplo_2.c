/* nos imprime si el numero es par o impar*/

//esta es la libreria
#include<stdio.h>

/*Funcion maestra del programa*/
int main(){

	  //Aqui especificamos que usaremos variables de tipo entero
	  int a;
	  //usando printf puedes darle una orden al usuario, en este caso que de un numero entero
 	  printf("Introduce un numero entero \n");
          //con este comando la maquina recibe el valor que dio el usuario y se lo da a una variable 
	  scanf("%i", &a);
	  //If nos permite realizar una serie de instrucciones después de verificar que se cumpla unacondición dada
	  if (a%2==0){
	             printf("a=%i es par\n", a);
	             //Else realiza una serie de instrucciones en caso de que no se cumpla if
	             }else{
	                  printf("a=%i es impar \n",a);
	                  }
	  //es para que te avise si tiene errores las insrucciones
	  return 0;
          }
