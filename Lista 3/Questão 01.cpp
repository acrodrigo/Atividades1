#include<stdio.h>
#include<conio.h>
#define tam 99	
	int main(){
		int vetor[tam], i;
		int menor= 10000000000, maior = 0, cont=0; 	
			for(i=0; i<tam; i++)
			{
				printf("Digite um valor \n ");
				scanf("%d", &vetor[i]);
				cont++;
				if (vetor[i]<0)
					{
					break;
					}
			}
			
			for(i=0; i<cont; i++)
			{
				if(vetor[i]<menor)
					{
					menor=vetor[i];
				}
				if(vetor[i]>maior)
					{
					maior=vetor[i];
				}				
			}
			printf("O maoir elemento é %d\n", maior);
			printf("O menor elemento é %d\n", menor);
	}
	
