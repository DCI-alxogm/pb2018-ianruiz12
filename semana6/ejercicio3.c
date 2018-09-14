/* En este ejercicio usaremos un ejercicio de la semana 5 que calcula el valor de una funcion evaluada en un rango dado, para que guarde el resultado de un archivo*/

#include<stdio.h>
#include<math.h>

int main(){
           FILE *fp;
           fp=fopen("funciones.txt","w");
           float inicial, final, espaciado, i, ex, lo, si, co, sq; //i=contador a=intervalo b=espaciado
           printf("¿Con cuál numero empezaremos?\n");
	   scanf("%f",&inicial);
	   printf("¿Con cuál numero terminaremos?\n");
	   scanf("%f",&final);
	   printf("¿Qué espaciado deseas entre los numeros:\n");
	   scanf("%f",&espaciado);
           for(i=inicial; i<=final; i+=espaciado){
	                                         fprintf(fp, "El numero es: %f\n\n",i);
	                                         ex=exp(i);
	                                         fprintf(fp, "El exponencial es:\t%f\n",ex);
	                                         lo=log(i);
	                                         fprintf(fp, "El logaritmo es:\t%f\n",lo);
	                                         si=sin(i);
	                                         fprintf(fp, "El seno es:\t\t%f\n",si);
	                                         co=cos(i);
	                                         fprintf(fp, "El coseno es:\t\t%f\n",co);
	                                         sq=sqrt(i);
	                                         fprintf(fp, "La raiz cuadrada es:\t%f\n\n",sq);
	                                         }

	   return 0;
           fclose(fp);
           }
