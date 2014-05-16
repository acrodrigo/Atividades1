#include <stdio.h>
#include <conio.h>
#define tam 10	
	int main(){
		int lis[tam];
		int i,maior=0, menor= lis[i], soma=0, cont=0, par=0;
		float media=0;
				
			for(i=0;i<tam;i++)
			{
			printf("Insira um elemento %d: ", i);
			scanf("%d", &lis[i] );
			cont++;
			soma = soma+lis[i];
			}
			media = soma/cont;
			
				for(i=0;i<tam;i++)
				{
					if(lis[i]>maior)
					{
						maior=lis[i];
					}
						if (lis[i]<menor)
						{
						menor = lis[i];
						}		
							if(lis[i]%2 ==0)
							{
								par = par+lis[i];
							}
				} 	
			printf("A- A soma dos numeros digitados é %d:\n", soma);	
			printf("B- A quantidade de numeros digitados é %d\n", cont);
			printf("C- A media dos numeros digitados é %f:\n", media);
			printf("D- O menor valor inserido é %d:\n", menor);
			printf("E- O maior valor inserido é %d:\n", maior);	
			printf("F- A soma dos numeros pares é %d:\n", par);
			
			
	

	}
	
