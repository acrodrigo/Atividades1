#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
		
		int alea(){
		int a;
		a=rand()%100;
		
		return a;
		}
			
	
		int main(){
			int a,b,c,d,e,f,g,h,i,j,l,res,cont=0;
			printf("Questão 1 - Qual é o resultado de %d + %d\n", a= alea(),b= alea());
			res = a+b;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if(c ==res)
				{
				printf("\nVoçê acertou\n");
				cont++;}
				else
				printf("\nVoçê errou\n");
				
			printf("\nQuestão 2 - Qual é o resultado de %d + %d\n", d= alea(),e= alea());
			res = d+e;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVoçê acertou\n");
				cont++;}
			else
				printf("\nVoçê errou\n");
		
			printf("\nQuestão 3 - Qual é o resultado de %d + %d\n", f= alea(),g= alea());
			res = f+g;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVoçê acertou\n");
				cont++;}
			else
				printf("\nVoçê errou\n");	
		
			printf("\nQuestão 4 - Qual é o resultado de %d + %d\n", h= alea(),i= alea());
			res = h+i;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVoçê acertou\n");
				cont++;}
			else
				printf("\nVoçê errou\n");
			
			printf("\nQuestão 5 - Qual é o resultado de %d + %d\n", j= alea(), l= alea());
			res = j+l;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVoçê acertou\n");
				cont++;}
			else
				printf("\nVoçê errou\n");
				
			printf("Voçê acertou %d", cont);	
	}
	
	
	
