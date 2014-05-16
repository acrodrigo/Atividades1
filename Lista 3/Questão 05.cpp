#include<stdio.h>
#include<conio.h>
	int main(){
		int n, i=0, m =0;
		printf("Digite um inteiro\n");
		scanf("%d", &n);
		if(n%2 !=0)
			{
				while(i<=n)
					{
						m = n+2;
						printf("Os %d proximos impares de %d são : %d", n, n, m);
					
					i++;
					}
			}
	} 
