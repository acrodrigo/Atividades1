#include<stdio.h>

void fribonacci(){
	int u0,u1,i,aux, soma;	
	soma =0;
	u0 = 0;
	u1 = 1;
	i=0;
		for(i = 0; soma <= 4000000; i++)
		{
			aux = u0+u1;
			u0= u1;
			u1= aux;
			if((u0%2==0))
				{
				soma= soma +u0;	
				}
			if((u1%2==0))
				{
				soma= soma +u1;	
				}		
				printf("%d\n", soma);
		}
		printf("O final %d", soma);
}

int main (){
	fribonacci();		
	}
