#include<stdio.h>
#include<conio.h>
	int main(){
		int n, ant, suc;
		printf("Digite um numero :");
		scanf("%d", &n);
		ant = n-1;
		suc = n+1;
		printf("O antecessor de %d é %d.\n", n, ant);
		printf("O sucessor de %d é %d.\n", n, suc);
	}
