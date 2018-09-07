/*este es el segundo ejercicio "calcular factorial*/

#include<stdio.h>

int main(){
          int n,i,x,salida=1;
          while(salida==1){
	                     printf("Dame un numero para darte su factorial:\n");
	                     scanf("%i",&n);
	                     x=n;
                             if(n>1){
		                    for(i=n;i>1;i--)
		                                    {
		                                    n=n*(i-1);
		                                    }
		                     printf("El numero factorial de %i es: %i\n",x,n);
	                             }else{
		                          if(n<0){
		                                 printf("Este numero no tiene factorial, lo sentimos\n");
		                                 }else{
		                                      printf("El numero factorial de %i es: 1\n",x);
		                                      }
	                            }

          printf("Si desea saber el numero factorial de otro numero ponga 1\n");
          printf("Si ya no desea saber el numero factorial de otro numero ponga 2\n");
          scanf("%i",&salida);
                               }
	return 0;
}
         
