/*en este programa tiene que recibir el valor de la variable x y evalua en ciertas funciones*/

#include<stdio.h>
#include<math.h>

int main(){

          float x,x1,y,y1,y2;
          printf("Introduzca el valor de su variable \n");
          scanf("%f",&x1);
          x=x1*(3.1416/180);
          y=exp(-x1);
          y1=cos(x) + 2*tan(x/2);
          y2=log(x1) + 3*pow(x1,2);
          printf("exp(-x)= (%f) \n", y);
          printf("cos(x)+2*tan(X/2)= (%f) \n", y1);
          printf("ln(x)+3x²= (%f) \n", y2);
          return 0;
 



}
