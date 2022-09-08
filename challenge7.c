# include <stdio.h>


int main(){
int a,b;
printf(" la valeur de a : ");
scanf("%d",&a);

printf("la valour de b : ");
scanf ("%d",&b);
float A=a+b, B=a-b, C=a*b, D=a/b, E=a%b;

printf("a+b : %.2f\na-b : %.2f\na*b : %.2f\na/b : %.2f\na%%b :%.2f\n", A,B,C,D,E);


}
