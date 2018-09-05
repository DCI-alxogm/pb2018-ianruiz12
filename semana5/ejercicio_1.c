/* en este programa evaluaremos algunas funciones de una variable x en un intervalo y con un espaciado definido por el usruario */

#include<stdio.h>
#include<math.h>

int main(){
           
           int i, n, intervalo, espaciado, inicio;
           float ex,lo,seno,coseno,raiz;
           printf("Dame el primer numero del rango que quieres utilizar \n");
           scanf("%f", inicio);
           printf("Dime con que numero termina tu rango \n");
           scanf("%f", intervalo);
           printf("Dime con que espaciado quieres obtener tus respuestas \n");
           scanf("%f", espaciado);
           n= inicio-intervalo/espaciado;
           for(i=0, i<=n, i+=espaciado){
           ex=exp(i);
           printf("El exponencial de %f es:\t %f \n ", i, ex);
           lo=log(i);
           printf("El logaritmo de %f es:\t %f \n ", i, lo);
           seno=sin(i);
           printf("El seno de %f es:\t %f \n ", i, seno);
           coseno=cos(i);
           printf("El coseno de %f es:\t %f \n ", i, coseno);
           raiz=sqrt(i);
           printf("El exponencial de %f es:\t %f \n ", i, raiz);
                                                     }
           return 0;
           }
         
           

