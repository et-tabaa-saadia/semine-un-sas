# include <stdio.h>
int main(){
    float A,B,C,D;
     printf ("la valeur de A : ");
     scanf ("%f" ,&A);

     printf ("la valeur de B : ");
     scanf ("%f" ,&B);
      printf ("la valeur de C : ");
     scanf ("%f" ,&C);
     printf ("la valeur de D : ");
     scanf ("%f" ,&D);
     float somme=(A+B+C+D);
	  float moyenne=somme/4;
     
     printf("la somme : %f\nmoyenne  : %f\n" ,somme,moyenne);
 }
