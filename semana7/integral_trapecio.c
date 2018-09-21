/* En este programa tendra que leer de un archivo la potencia de la función, x^p. (p) debe se mayor o igual a uno, el archivo tambien debe leer el intervalo en el que se evaluarala funcion, asi como el numero de vaces que se va a evaluar(N). */


#include<stdio.h>
#include<math.h>

int main(){
           FILE *fp;
           float i, a, b, c, N, p, h, k, n,fa, fx, I; 
           fp=fopen("datos.txt","r+w")
           fprintf("Ingrese la potencia: \n");
           fscanf("%f", &p);
           fprintf("Ingrese el valor minimo del intervalo: \n");
           fscanf("%f", &a);
           fprintf("ingrese el valor maximo del intervalo: \n");
           fscanf("%f", &b);
           fprintf("ingrese el numero de veces que se evaluara: \n");
           fscanf("%f", &N);
           c=(b-a)/N;
           if(p>=1){
                   fa=pow(a,p);
         
           
