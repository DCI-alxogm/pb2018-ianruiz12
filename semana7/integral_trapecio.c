/* En este programa tendra que leer de un archivo la potencia de la función, x^p. (p) debe se mayor o igual a uno, el archivo tambien debe leer el intervalo en el que se evaluarala funcion, asi como el numero de vaces que se va a evaluar(N). */


#include<stdio.h>
#include<math.h>

int main(){
           FILE *fp;
           int j, i, p, N, n;
           float a, b, c, fa, h, suma; 
           fp=fopen("datos.txt","r");
           fscanf(fp, "%i, %f, %f, %i, %i", &p, &a, &b, &N, &n);
           printf("%i, %f, %f, %i, %i \n", p, a, b, N, n);
           fclose(fp);
           float x[N], fx[N], intx[N];     
           if(p<0){
                  printf("La potencia es negativa \n");
                  return 1;
                  }      
           for(i=0;i<N;i++){
                           x[i]=0;
                           fx[i]=0;
                           intx[i]=0;
                           }
           for(i=0;i<N;i++){
                           x[i]=0;
                           fx[i]=0;
                           intx[i]=0;
                           }
          c=(b-a)/N;
          for(i=0;i<N;i++){
                          x[i]=a+(i*c);
                          fx[i]=pow(x[i],p);
                          }
          fa=pow(a,p);
          for(i=0;i<N;i++){
                          h=(x[i]-a)/n;
                          suma=0;
                          for(j=1;j<n;j++){
                                           suma=suma+(pow((x[i]+(h*j)),p));
                                          }
                          intx[i]=((fx[i]+fa)/2.0);
                          }
          fp=fopen("resultados.txt", "w"); 
          fprintf(fp, "x , fx , int(x) \n");
          for(i=0;i<N;i++){
                          fprintf(fp," %f  %f  %f", x[i], fx[i], intx[i]);
                          }
          fclose(fp);
          return 0;
          }
                  
         
           
