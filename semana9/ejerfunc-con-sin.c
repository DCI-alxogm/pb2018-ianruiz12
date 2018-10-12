#include<stdio.h>

void cuadrado(float h);
int main(){
	  float x;
	  printf("dame un numero\n");
	  scanf("%f",&x);
	  cuadrado(x);
	  return 0;
          }
void cuadrado(float h){
	              float h2;
	              h2=h*h;
	              printf("El cuadrado de %f es este: %f \n",h,h2);
                      }
