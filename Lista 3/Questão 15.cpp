#include<stdio.h>
#include<conio.h>
	int main(){
		int i, soma=0;
			for(i=1; i<=1000; i++)
				if((i%3==0)||(i%5==0))
				{
					soma = soma+ i;
				}
			
				
		printf("%d\n", soma);
		
		printf("A soma dos numeros abaixo de 1000 que são divisores de 5 e 3 é %d:\n", soma);
	}
	
