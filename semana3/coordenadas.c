/*aqui crearemos un programa que convierta las coordenadas cartesianas en esfericas*/

#include<stdio.h>
#include<math.h>

int main(){
      
          int x,y,z,a,b,c;
          
          printf("Dame una coordenada cartesianas x: \n");
          scanf("%i \n", &x);          
          printf("Dame una coordenada cartesianas y: \n");
          scanf("%i \n", &y);
          printf("Dame una coordenada cartesianas z: \n");
          scanf("%i \n", &z);          
          a=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
          b=acos(z/a);
          c=atan(y/x);
          printf("tus coordenadas esfericas son (%i), (%i), (%i) \n", a, b, c);
          printf("tus coordenadas cartesianas fueron (%i), (%i), (%i) \n", x, y, z);
         
          return 0;

          }
      
