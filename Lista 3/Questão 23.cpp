#include<stdio.h>
#include<conio.h>
#define t 14	
	int main(){
		int i;
		float nota[t], cont=0, tt=0;
		for (i=0; i<=t; i++)
			{
				printf("Digite a nota \n");
				scanf("%f", &nota[i]);
				tt= tt+nota[i];
				cont++;
			}
			printf("A média de notas da sala é %2.f\n", (tt/cont));
	}
	
	
