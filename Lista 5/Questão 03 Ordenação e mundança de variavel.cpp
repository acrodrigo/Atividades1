#include<stdio.h>
#include<conio.h>

void ordenacao(int a, int b, int c){
	int aux;
	if(a>b){
		aux=a;
		a=b;
		b=aux;
	}
	
	if(b>c){
		aux=b;
		b=c;
		c=aux;
	}
	
	if(a>b){
		aux=a;
		a=b;
		b=aux;
	}	

	printf("O valor de A é : %d\n",a);
	printf("O valor de B é : %d\n",b);
	printf("O valor de C é : %d\n",c);
	
}

int main(){
	int a, b, c, aux;
	printf("Digite um valor para A \n");
	scanf("%d", &a);
	printf("Digite um valor para B \n");
	scanf("%d", &b);
	printf("Digite um valor para C \n");
	scanf("%d", &c);
	
	ordenacao(a,b,c);
}
