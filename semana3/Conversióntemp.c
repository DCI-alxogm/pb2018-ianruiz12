/*aqui empezaremos con el programa de conversion de temperaturas*/


#include<stdio.h>
#include<math.h>

int main (){

	float C,K,F;
	printf("Introduzca su temperatura en Celsius \n");
	scanf("%f",&C);
	K=C+273.15;
	F=(1.8*(K-273.15))+35;
	printf("Esta es tu temperatura en Kelvin \n");
	printf("%f \n",K);
	printf("Esta es tu temperatura en Fahrenheit \n");
	printf("%f \n",F);
	printf("Aqui te devolvemos tu temperatura en Celsius \n");
	printf("%f \n" ,C);
	return 0;

}


/*recuerda de quebes utilizar \n para que salte una linea y no se vea todo amontonado*/
