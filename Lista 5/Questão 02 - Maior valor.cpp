#include<stdio.h>
#include<conio.h>

void maior_valor_variavel(){
	int a, b, aux;
	printf("Digite o valor de a.\n");
	scanf("%d", &a);
	printf("Digite o valor de b.\n");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	if(a>b){
		printf(" A = %d.\n", a);
		printf(" B = %d.\n", b);	
	}else{
		aux = a;
		a = b;
		b = aux;
		printf(" A = %d.\n", a);
		printf(" B = %d.\n", b);	
	}
	
	
}

int main(){
	maior_valor_variavel();
}
