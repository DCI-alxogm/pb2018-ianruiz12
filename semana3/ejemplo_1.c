/* Este es el ejemplo acerca el comando switch*/
//esta es la libreria
#include<stdio.h>

//Funcion maestra del programa
int main(){

	//Aqui especificamos que usaremos variables de tipo entero
	int opcion;

	//usando printf puedes darle una orden al usuario, en este caso elefir una opcion
	printf("Teclea una opcion \n");
	//estas son las opciones
	printf("(1) para convertir tempertaturas \n"); 
	printf("(2) para convertir coordenadas\n");

	//con este comando la maquina recibe el valor que dio el usuario y se lo da a una variable 
	scanf("%i", &opcion);

	//Switch permite usar el valor de una variable entera para elegir secuencia de acciones de acuerdo al caso que corresponda
	switch(opcion)
	{
	//cada case es una opcion para el usuario 
	case 1: 
		printf("Entre la opcion 1");
		break;
	case 2:
		printf("Entre la opcion 2");
		break;
	default:
		printf("Opcion invalida");
		break;
	}
	//es para que te avise si tiene errores las insrucciones
	return 0;
      }
