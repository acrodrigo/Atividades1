#include<stdio.h>
#include<conio.h>

void divisor(){
	int i, n;
	printf("Digite um inteiro");
	scanf("%d",&n);
	for(i=1;i<= n ;i++)
		if(n%i==0)
			{
			printf("%d � divisor de %d\n", i, n);
			}
}


int main(){
	divisor();	
} 
