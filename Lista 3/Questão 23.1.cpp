#include<stdio.h>
#include<conio.h>
#define t 14	

/*void inserir(){
	int i;
	float nota[t]; 
	for (i=0; i<t; i++)
		{
			printf("Digite a nota \n");
			scanf("%f", &nota[i]);		
		}
		
}*/

int media_notas(){
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


int main(){
	media_notas();	
	}
	
	
