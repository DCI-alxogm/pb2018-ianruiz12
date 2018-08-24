/*Este programa hará conversiones de temperatura y de coordenadas cartesianas a polares dependiendo que desees*/

#include<stdio.h>
#include<math.h>

int main(){
    
           int opcion;
           float temperatura, K,F,C;
           double x,y,aux,r,a,x1,y1;
     
           printf("Esoge una opción \n");
           printf("(1) Conversión de grados Celsius a Fahrenheit y a Kelvin \n");
           printf("(2) Conversión de coordenadas cartesianas a polares \n");
           scanf("%i", &opcion);
           switch(opcion){
                         case 1:
                         printf("Introduzca su temperatura en Celsius \n");
	                 scanf("%f",&C);
	                 K=C+273.15;
	                 F=(1.8*(K-273.15))+35;
	                 printf("Esta es tu temperatura en Kelvin \n");
	                 printf("%f \n",K);
	                 printf("Esta es tu temperatura en Fahrenheit \n");
	                 printf("%f \n",F);
	                 printf("Aqui te devolvemos tu temperatura en Celsius \n");
	                 printf("%f \n" ,C);
                         break;
                         case  2:
                         printf("Dame una coordenada cartesiana X: \n");
                         scanf("%lf" ,x);
                         printf("Dame una coordenada cartesiana Y: \n");
                         scanf("%lf" ,y);
                         r=sqrt(pow(x,2)+pow(y,2));
                         a=atan(y/x)*57.29557795131;
                         printf("Estas son tus coordenadas polares Radio=(%lf), Coaltitud(%lf) \n", r,a);
                         if (x==0 && y==0)
                         printf("Tu coordenada (%lf, %lf) esta en el origen \n", x,y);
                         else if (x>0 && y>0)
                         printf("Tu coordenada (%lf, %lf) esta en el primer cuadrante \n", x,y);
                         else if (x<0 && y>0)
                         printf("Tu coordenada (%lf, %lf) esta en el segundo cuadrante \n", x,y);
                         else if (x<0 && y<0)
                         printf("Tu coordenada (%lf, %lf) esta en el tercer cuadrante \n", x,y);
                         else if (x>0 && y<0)
                         printf("Tu coordenada (%lf, %lf) esta en el cuarto cuadrante \n", x,y);
                         x1=r*cos(a/57.29557795131);
                         y1=r*sin(a/57.29557795131);
                         printf("Te devolvemos tus coordenadas cartesianas X=(%lf), Y=(%lf) \n", x1,y1);
                         break;
                         default:
                         printf("Opción no valida");
                         break;
                         } 
          return 0; 
          }






