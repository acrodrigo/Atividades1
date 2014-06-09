#include<stdio.h>
#include<conio.h>
#define n 5


 
void imprime(int v[]){
	int *use;
	for(use=v; use< v+n; use++ ){
		printf("%d\n",*use+1);
	}
}




int main(){
	int vetor[n], i, *p;
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor\n");
		scanf("%d", p);
	}

	imprime(vetor);

}
