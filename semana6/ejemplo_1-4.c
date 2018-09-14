/*Ejemplos del 1 al 4 juntos*/
#include<stdio.h>

int main(){
	  int i;
	  float numeros[10];
          //ejemplo No. 1
	  numeros[4]=7;
          for(i=0;i<10;i++){
	  //ejemplo No. 2
                           scanf("%f",&numeros[i]);
                           }
          //ejemplo No. 3
          for(i=0;i<10;i++){
	                   printf("%f\n",numeros[i]);
	                   }
          //ejemplo 4
	  for(i=0;i<10;i++){
	                   scanf("%f",&numeros[i]);
	                   numeros[i]=numeros[i]*2;
	                   printf("%f\n",numeros[i]);
                 	   }
	  return 0;
          }
