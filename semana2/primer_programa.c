/*Creado el 15 de agosto de 2018 por Ian Ruiz*/

#include<stdio.h>

int main()
{
	int edad,edad2;
        char nombre[20];
	printf("Introduce tu nombre: \n");
        scanf("%s", &nombre);
        printf("Hola %s\n",nombre);
	printf("Este es el 1er programa de la semana 2\n");
        printf("introduce tu edad: \n");
	scanf("%i",&edad);
        edad2=edad+10; 
	printf("\n Tu edad en 2018 es : %i \n",edad2);
	return 0;
} 	
