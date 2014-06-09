#include<stdio.h>
#include<conio.h>

int dobro(int a){
	a += a;
}

void resultado(int a, int b){
	printf("O dobro de %d é: %d\n", a, dobro(a));
	printf("O dobro de %d é: %d\n", b, dobro(b));
}

int main(){
	int a, b;
	printf("Digite uma valor para a\n");
	scanf("%d", &a);
	printf("Digite uma valor para b\n");
	scanf("%d", &b);
	
	resultado(a, b);
}

