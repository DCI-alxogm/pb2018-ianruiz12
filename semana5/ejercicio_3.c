/* Este es el ejercicio de no. primos*/

#include<stdio.h>
#include<math.h>

int main(){
           int a,b,c,d,e,k=1,l;
           while (k==1){
           printf("dame un rango de numeros\n");
           scanf("%i",&a);
           scanf("%i",&b);
           if((a-b)<=100){
           printf("Estos son los numeros primos dentro de tu rango \n");
           for(c=a;c<=b;c++){
                            for (d=2;d<c;d++){
                                             e=0;
                                             for(d=1;d<=c;d++){
                                                              if(c%d==0){
                                                                        e++;
                                                                         }
                                                               }
                                             if(e==2){
                                                     printf("%i\n",c);
                                              }
                                              else{
                                                  printf("\n");
                                                   }
                                              }
                            }
                         }
           else{
               printf("Este rango no es valido\n");
               }
           printf("¿Deseas buscar en otro rango? \n");
           printf("Si asi lo desea ponga 1, si no es lo que quiere presione 2. \n");
           scanf("%i",&l);
           if (l!=1){
           printf("bye bye \n");
           k=0;
                    }
           else if(l=1){
                       k=1;
                       printf("Aqui volvemos \n");
                       }
                       }
           return 0;
           }

