#include<stdio.h>
#include<math.h>

int main(){
          FILE *fpd;
	  FILE *fpr;
          int M,T;
	  double x0,y0,z0,vx0,vy0,vz0,X,Y,Z,VX,VY,VZ,r,G,m,h,i;
          fpd=fopen("datos.txt","r");
	  fscanf(fpd,"%lf, %lf, %lf, %lf, %lf, %lf, %lf, %i, %i, %lf",&x0,&y0,&z0,&vx0,&vy0,&vz0,&m,&M,&T,&h);
          fpr=fopen("resultados.txt","w");
          G=4.0*pow(3.141592653589,2);			
          vx0*=365.242;
          vy0*=365.242;
	  vz0*=365.242;
          for(i=0.0;i<=T;i+=h){
                              X=x0+vx0*h;
	                      Y=y0+vy0*h;
                              Z=z0+vz0*h;
                              r=sqrt(pow(x0,2)+pow(y0,2)+pow(z0,2));
                              VX=vx0-h*((G*M*x0)/pow(r,3));
                              VY=vy0-h*((G*M*y0)/pow(r,3));
                              VZ=vz0-h*((G*M*z0)/pow(r,3));
	                      x0=X;
                              y0=Y;
                              z0=Z;
                              vx0=VX;
	                      vy0=VY;
                              vz0=VZ;
                              fprintf(fpr,"%lf ",i*365);
                              fprintf(fpr," %lf  %lf  %lf  %lf  %lf  %lf \n",X,Y,Z,VX,VY,VZ);
                              }         
          fclose(fpr);
          fclose(fpd);
	  return 0;
          }
