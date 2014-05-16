#include<stdio.h>
#include<conio.h>
#define t 10
	int main(){
		int a[t],b[t], c[t], i;
			for (i=0; i<t ; i++)
				{
				printf("Digite um valor para A \n");
				scanf("%d", &a[i]);
					
				}
			for (i=0; i<t ; i++)
				{
				printf("Digite um valor para B \n");
				scanf("%d", &b[i]);				
				}
			
			for (i=0; i<t ; i++)
				{
				printf("Valor A posição %d é %d,", i, a[i]);				
				}
				
			for (i=0; i<t ; i++)
				{				
				printf("Valor B posição %d é %d,", i, b[i]);
				}
				
			for(i=0; i<t; i++)
				{
					c[i]= a[i]-b[i];
					printf("Resultado da posição %d: %d\n",i, c[i]);
				}	
	}
	
