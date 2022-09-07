# include <stdio.h>


int main(){
	int age,telephone;
	char nom[20];
	char prenom[20];
    char sexe[10];
    
//	int x, c, h;
	printf("  nom : "); 
	scanf("%s", &nom);
	printf(" age : ");
	scanf("%d",&age);
	printf(" prenom : ");
	scanf("%s", &prenom);
	
	printf("sexe : ");
	scanf("%s",&sexe);
	
	printf("numero de telephone : ");

	scanf("%d",&telephone);
	
	
	printf("le nom  %s\n", nom);
	printf("l'age et %d\n",age);
	printf("le prenom et %s\n",prenom);
	printf("le telephone et %d\n",telephone);
	
	printf("le sexe et %s\n",sexe);
	}
