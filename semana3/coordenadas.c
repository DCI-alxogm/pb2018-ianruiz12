/*aqui crearemos un programa que convierta las coordenadas cartesianas en esfericas*/

#include<stdio.h>
#include<math.h>

int main(){
      
          double x,y,z,r,c,a,x1,y1,z1;
          

          printf("Dame una coordenada cartesianas x: \n");
          scanf("%lf \n", &x);          
          printf("Dame una coordenada cartesianas y: \n");
          scanf("%lf \n", &y);
          printf("Dame una coordenada cartesianas z: \n");
          scanf("%lf \n", &z);          
          r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
          c=acos(z/r)*57.29557795131;
          a=atan(y/x)*57.29557795131;
          x1=r*sin(c)*cos(a);
          y1=r*sin(c)*sin(a);
          z1=r*cos(c);
          printf("tus coordenadas esfericas son Radio=(%lf), Coaltitud=(%lf), Aimut=(%lf) \n", r, c, z);
          printf("tus coordenadas cartesianas fueron x=(%lf), y=(%lf), z=(%lf) \n", x1, y1, z1);
          
          return 0;

          }
      


/*Piensa bien cuando metes angulos Ian del futuro por que te atontas todo*/
