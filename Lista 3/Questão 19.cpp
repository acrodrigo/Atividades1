#include<stdio.h>
#include<conio.h>
#define t 3
	int main(){
		int vet[t];
		int i, maior=0 , menor=10000;
		for (i=0; i<=t; i++)
			{
				printf("Digite um valor \n");
				scanf("%d", &vet[i]);
			}
			
			for(i=0; i<t ;i++) 
			{
				if(vet[i]>maior)
					{
						maior=vet[i];
					}
						if (vet[i]<menor)
						{
						menor=
						vet[i];
						}		
			
				}
				printf("o maoir inteiro é, %d\n", maior);
				/*printf("A posição do maior elemento é %d\n", i);*/
				printf("O menor inteiro é , %d", menor);
				/*printf("A posição do menor elemento é %d\n", i);*/
}
