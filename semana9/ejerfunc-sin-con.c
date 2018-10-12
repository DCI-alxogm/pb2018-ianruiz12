#include<stdio.h>

float cuadrado();
int main(){
	  float x2;
	  x2=cuadrado();
	  printf("es este: %f\n",x2);
	  return 0;
          }
float cuadrado(){
	        float x;
	        printf("Dame un numero\n");
	        scanf("%f",&x);
	        printf("El cuadrado de %f",x);
	        return x*x;
                }
