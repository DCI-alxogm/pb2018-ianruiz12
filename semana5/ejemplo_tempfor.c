





#include<stdio.h>
int main(){
	  float K,C,D,F;
	  int n, i, op;
	  while(0==1||2){
		        if(op==2)
			return 1;

                         printf("Dame una temperatura en Celcius\n");
	                 scanf("%f", &C);
                         printf("Dame la temperatura final\n");
                         scanf("%f", &F);
                         printf("Pon el numero de veces que quieras realizar la operacion\n");
                         scanf("%i", &n);
                         D=(F-C)/n;
                         printf("%f", D);
	                 for(i=0;i<n;i++){
		         K=C+273.15;
		         C=C+D;
                         printf("%f %f\n",C,K);
		          
	                                  }
	printf("Si quieres volver a hacer el calculo pon 1\n");
        printf("Si quieres irte pon 2\n");		
	scanf("%i",&op);
	                 }
	return 0;
}
