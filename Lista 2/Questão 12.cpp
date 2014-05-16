#include<stdio.h>
#include<conio.h>
#include<math.h>	
	int main(){
		int op;
		float n1, n2, n3, num, res;
		printf("Op 1 - Média Geometrica \n");
		printf("Op 2 - Média Ponderada \n");
		printf("Op 3 - Média Harmônica \n");
		printf("Op 4 - Média Aritmética \n");
		scanf("%d", &op);
		if(!(op == 1)||(op == 2)||(op == 3)||(op == 4))
				{
					printf("Opção invalida invalida ");
				}					
		printf("Digite um numero \n");
		scanf("%f", &n1);
		printf("Digite um numero \n");
		scanf("%f", &n2);
		printf("Digite um numero \n");
		scanf("%f", &n3);

			if (op == 1)
				{
				printf("A média geometrica dos numeros inseridos é :%f ", pow((n1*n2*n3),1.0/3.0) );		
				}
			if(op == 2)
				{
					printf(" A média ponderada dos numeros inseridos é : %f ", ((n1+(n2*2)+(n3*3))/5));
				}
			if(op == 3)
				{
					printf("A média harmonica dos numeros inseridos é : %f", ((1/n1)+(1/n2)+(1/n3)/3));		
				}					
			if(op == 4)
				{
					printf("A média aritmética dos numeros inseridos é : %f", ((n1+n2+n3)/3));
				}
			if(!(op == 1)||(op == 2)||(op == 3)||(op == 4))
				{
					printf("Opção invalida invalida ");
				}					
					
					
}				
	
