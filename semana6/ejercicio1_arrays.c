/*Este es el ejercicio 1 donde debiamos poner arreglos a un programa donde nos darian edad, genero, semestre y promedio*/

#include<stdio.h>

int main(){
	  int i,h=0,m=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;
	  int edad[10],genero[10],semestre[10];
	  float promedio[10],p=0;
	  for(i=0;i<10;i++){
	  printf("¿Cual es la edad del alumno %i? \n",i+1);
	  scanf("%i", &edad[i]);
	  printf("¿Cual es el genero del alumno %i? \n",i+1);
	  printf("Hombre: 0\nMujer: 1\n");
	  scanf("%i", &genero[i]);
	  printf("¿Cual es el semestre del alumno %i? \n",i+1);
          printf("1,2,3,4,5,6,7,8,9 \n");
	  scanf("%i", &semestre[i]);
	  printf("¿Cual es el promedio del alumno %i? \n",i+1);
	  scanf("%f", &promedio[i]);}
	  for(i=0;i<10;i++){
          	           if(genero[i]==0){
		                         h++;}
		           else{
		               m++;}
		           if(semestre[i]==1){
		                             s1++;}
		           else{
		               if(semestre[i]==2){
		                                 s2++;}
		                                 else{
		                                     if(semestre[i]==3){
		                                                       s3++;}
		                                     else{
		                                         if(semestre[i]==4){
		                                                           s4++;}
		                                         else{
		                                             if(semestre[i]==5){
		                                                               s5++;}
		                                             else{
		                                                 if(semestre[i]==6){
		                                                                   s6++;}
		                                                 else{
		                                                     if(semestre[i]==7){
		                                                                       s7++;}
		                                                     else{
		                                                         if(semestre[i]==8){
		                                                                           s8++;}
		                                                         else{
		                                                              s9++;}
		}}}}}}}
		p=p+promedio[i];
	        }
	  p=p/10;
	  printf("Se reportaron 10 alumnos de los cuales:\n");
	  printf("(%i) son mujeres y (%i) son hombres\n", m, h);
	  printf("(%i) son de primer semestre \n", s1);
	  printf("%i son de segundo semestre \n", s2);
	  printf("%i son de tercer semestre \n", s3);
	  printf("%i son de cuarto semestre \n", s4);
	  printf("%i son de quinto semestre \n", s5);
	  printf("%i son de sexto semestre \n", s6);
	  printf("%i son de septimo semestre \n", s7);
	  printf("%i son de octavo semestre \n", s8);
	  printf("%i son de noveno semestre \n", s9);
	  printf("El promedio de las calificaciones de todos los alumnos es (%f) \n", p);
          return 0;
          }
