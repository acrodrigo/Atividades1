#include<stdio.h>
#include<conio.h>
#define t 10	
	int main(){
		
		int valor[t], i, soma=0;
		for (i=0; i<=t; i++)
			{
				printf("Digite um valor \n");
				scanf("%d", &valor[i]);
				soma= soma + valor[i];
				
			}
			printf("A soma dos valores inseridos é %d\n", soma);
	}
