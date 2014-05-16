#include<stdio.h>
#include<conio.h>
	int main(){
		float n1, n2, n3, res;
		printf("Digite um valor :");
		scanf("%f", &n1);
		printf("Digite um valor :");
		scanf("%f", &n2);
		printf("Digite um valor :");
		scanf("%f", &n3);
		res =(n1*n1) + (n2*n2) + (n3*n3);
		printf("A soma do quadrado dos três numeros é %f.\n", res);
	}
