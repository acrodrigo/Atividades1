#include<stdio.h>
#include<conio.h>

void par(int n){
	int c;
	int i =0;
	c= (n-1);
	while(i<n){
		c= c+2;
		printf("Os %d proximos pares de %d são : %d\n", n, n, c);	
	i++;	
	} 
}

void impar(int n){
	int c;
	int i =0;
	c= n;
	while(i<n){
		c= c+2;
		printf("Os %d proximos impares de %d são : %d\n", n, n, c);	
	i++;	
	} 
}

int main(){
	int n;
	printf("Digite um inteiro\n");
	scanf("%d", &n);
	if(n%2 ==0)
		{
		par(n);
		}
	if(n%2 !=0)
		{
		impar(n);
		}
	} 
	
	
	
	/*while(i<=n)
					{
						m = n+2;
						printf("Os %d proximos impares de %d são : %d", n, n, m);
					
					i++;
					}*/
