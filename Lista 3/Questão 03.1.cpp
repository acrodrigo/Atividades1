#include<stdio.h>
#include<conio.h>

int ins_digito(int parada ){
			printf("Digite um numero para parar a sequênçia de fribonacci");
			scanf("%d", &parada);
			return parada;
		}
		
int fribonacci(int x){
	int u0,u1,c,i, aux;
	u0 = 0;
	u1 = 1;
	i=0;
	c = ins_digito(c);
		for(i = 0; i < c; i++)
		{
			aux = u0+u1;
			u0= u1;
			u1= aux;
			if((u0<=c)||(u1<=c))
				{		
				printf("%d\n ", aux);
				}
		}
		
		
	}

	
	int main(){
	int aux;
	printf( "%d",  fribonacci(aux));
}

	
