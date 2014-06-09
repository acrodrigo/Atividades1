#include<stdio.h>
#include<conio.h>

void invert_variavel(){
	int a, b, aux;
	printf("Digite o valor de a.\n");
	scanf("%d", &a);
	printf("Digite o valor de b.\n");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("O valores invetidos fica assim \n");
	printf(" A = %d.\n", a);
	printf(" B = %d.\n", b);	
}

int main(){
	invert_variavel();
}
