/*Este es el ejemplo de diapositiva 12*/

//esta es la libreria
#include <stdio.h>

/*Funcion maestra del programa*/
int main(){

	  //Aqui especificamos que usaremos variables de tipo letra
	  char c;
	  // definimos las variables
	  int es_vocalminuscula, es_vocalmayuscula;
	  //usando printf puedes darle una orden al usuario, en este caso que de una letra
	  printf("Este programa le dira si la letra que introdujo es vocal o mayuscula. Introduzca una letra \n");
          //con este comando la maquina recibe el valor que dio el usuario y se lo da a una variable
          scanf("%c",&c);
          //Se ponen los parametros de las variables
	  es_vocalminuscula=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	  es_vocalmayuscula=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
          //la coondicion que que si el usuario pone vocales mayusculas o minusculas se lo hara saber
	  if (es_vocalmayuscula||es_vocalminuscula){
                                                   printf("%c es una vocal \n",c);
	                                           // si el usuario no usa vocales se lo hara saber
	                                           } else{
		                                         printf("%c es consonante\n", c);
	                                                 }
	  //es para que te avise si tiene errores las insrucciones
	  return 0;
}
