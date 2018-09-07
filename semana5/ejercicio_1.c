/* en este programa evaluaremos algunas funciones de una variable x en un intervalo y con un espaciado definido por el usruario */

#include<stdio.h>
#include<math.h>

int main(){
           float inicial, final, espaciado, i, ex, lo, si, co, sq; //i=contador a=intervalo b=espaciado
           printf("¿Con cuál numero empezaremos?\n");
	   scanf("%f",&inicial);
	   printf("¿Con cuál numero terminaremos?\n");
	   scanf("%f",&final);
	   printf("¿Qué espaciado deseas entre los numeros:\n");
	   scanf("%f",&espaciado);
           for(i=inicial; i<=final; i+=espaciado){
	                                         printf("El numero es: %f\n\n",i);
	                                         ex=exp(i);
	                                         printf("El exponencial es:\t%f\n",ex);
	                                         lo=log(i);
	                                         printf("El logaritmo es:\t%f\n",lo);
	                                         si=sin(i);
	                                         printf("El seno es:\t\t%f\n",si);
	                                         co=cos(i);
	                                         printf("El coseno es:\t\t%f\n",co);
	                                         sq=sqrt(i);
	                                         printf("La raiz cuadrada es:\t%f\n\n",sq);
	                                         }

	   return 0;
           }
