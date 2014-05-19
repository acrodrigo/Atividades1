#include<stdio.h>
#include<conio.h>
#define t 2
int ele_pares_do_vetor(){
	int vet[t];
	int i, cont;
	for (i=0; i<=t; i++)
			{
				printf("Digite um valor \n");
				scanf("%d", &vet[i]);
			}
	cont=0;	
		for(i=0;i<t;i++) 
			{
			if(vet[i]%2==0); 
			{
				cont++;
			}
		}
	printf("São %d numeros pares no vetor inserido", cont);
}

int main(){
	
	ele_pares_do_vetor();
	}		
