#include<stdio.h>
#include<conio.h>
int main (){
	int u0,u1,c,i, aux;
	printf("digite um valor");
	scanf("%d", &c);
	u0 = 0;
	u1 = 1;
	i=0;
		for(i = 0; i < c; i++)
	{
			aux = u0+u1;
			u0= u1;
			u1= aux;
			if((u0<=c)||(u1<=c))
				{		
				printf("%d\n", aux);
				}
		}
		
		
	}
