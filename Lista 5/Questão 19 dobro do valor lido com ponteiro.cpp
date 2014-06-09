#include<stdio.h>
#include<conio.h>
#define n 5


 
void imprime(int v[]){
	int *p;
	for(p=v; p< v+n; p++ ){
		printf("%d\n",*p*2);
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
