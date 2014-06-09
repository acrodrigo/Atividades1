#include<stdio.h>
#include<conio.h>
#define n 5
 
void imprime(int v[]){
	int *p;
	for(p=v; p< v+n; p++ ){
		if(*p%2==0){
		printf("%p\n",p);
		}	
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
