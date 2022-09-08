# include<stdio.h>
int main(){
	float C ,F;
	printf("entrer la temperature en F : ");
	scanf("%f",&F);
	C=(F-32)/1.8;
	printf(" la temprature en C : %.2f",C);
	
	if(C>=5 && C<15){
	
	printf("froid \n");
	
	}
	
	 else if  (C<5){

	  printf ("tres froid \n");
}

	  else if  (C>15 && C <35){
	 
	  printf ("choud \n");
}
else	if (C>35)
	printf("trés choud \n");

	
	
	
	
}
