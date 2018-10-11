/* En este ejemplo sera lo mismo que el pasado pero en vez de declarar un arreglo y manipularlo con un apuntador, sera encontrar la suma de 6 numeros declarando un apuntador y manipulandolo como arreglo */

#include<stdio.h>
#include<stdlib.h>
int main(){
          int i, sum = 0;
          int *num;
          printf(" Introduce 6 números enteros:\n");
          num=(int*) malloc(6* sizeof(int));
          for(i = 0; i < 6; ++i){
                                scanf("%d",&num[i]); // (num + i) es equivalente a
                                sum +=num[i]; // *(num + i) es equivalente a num[i]
                                }
          printf("Suma = %d", sum);
          return 0;
          }
