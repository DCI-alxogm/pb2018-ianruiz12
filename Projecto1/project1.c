#include<stdio.h>
#include<math.h>

int main(){
          FILE *fpd;
	  FILE *fpr;
          int M,T;
	  double xi,yi,zi,vxi,vyi,vzi,X,Y,Z,VX,VY,VZ,r,G,m,h,i;
          fpd=fopen("datos.txt","r");
	  fscanf(fpd,"%lf, %lf, %lf, %lf, %lf, %lf, %lf, %i, %i, %lf",&xi,&yi,&zi,&vxi,&vyi,&vzi,&m,&M,&T,&h);
          fpr=fopen("resultados.txt","w");
          G=4.0*pow(3.141592653589,2);			
          vxi*=365.242;
          vyi*=365.242;
	  vzi*=365.242;
          for(i=0.0;i<=T;i+=h){
                              X=xi+vxi*h;
	                      Y=yi+vyi*h;
                              Z=zi+vzi*h;
                              r=sqrt(pow(xi,2)+pow(yi,2)+pow(zi,2));
                              VX=vxi-h*((G*M*xi)/pow(r,3));
                              VY=vyi-h*((G*M*yi)/pow(r,3));
                              VZ=vzi-h*((G*M*zi)/pow(r,3));
	                      xi=X;
                              yi=Y;
                              zi=Z;
                              vxi=VX;
	                      vyi=VY;
                              vzi=VZ;
                              fprintf(fpr,"%lf ",i*365);
                              fprintf(fpr," %lf  %lf  %lf  %lf  %lf  %lf \n",X,Y,Z,VX,VY,VZ);
                              }         
          fclose(fpr);
          fclose(fpd);
	  return 0;
          }
