#include<stdio.h>
#include<conio.h>
#define n 5


 
void imprime(int v[], int x){
	int *p;
	for(p=v; p< v+n; p++ ){
		*p = x;
	}
	
	for(p=v; p< v+n; p++ ){
		printf("%d\n",*p);
	}

}




int main(){
	int vetor[n], i, *p, valor;
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor\n");
		scanf("%d", p);
	}
	
	printf("Digite um valor para substituir todos os valores do vetor\n");
	scanf("%d", &valor);

	imprime(vetor, valor);

}
