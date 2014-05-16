#include<stdio.h>
#include<conio.h>

	int main(){
		int i, n;
		printf("Digite um inteiro");
		scanf("%d",&n);
		
			for (i=1;i<= n ;i++)
				if(n%i==0)
				{
				printf("%d é divisor de %d\n", i, n);
				}
	} 
