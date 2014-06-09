#include<stdio.h>
#include<conio.h>



int maior(int v[], int tam){
	int i, ma = NULL;
	for(i=0; i<tam; i++){
		if(v[i]> ma){
			ma= v[i];
		}
	}
	
	return ma;
}

int menor(int v[], int tam){
	int i, me = 10000000;
	for(i=0; i<tam; i++){
		if(v[i]< me){
			me= v[i];
		}
	}
	
	return me;
}






int main(){
	int tam, i;
	printf("Digite o tamanho do vetor\n");
	scanf("%d", &tam);
	
	int vetor[tam];
		for(i=0; i<tam; i++){
			printf("Digite o valor do vetor\n");
			scanf("%d", &vetor[i]);
		} 

		printf("O maior valor do vetor é %d\n", maior(vetor, tam));
		printf("O menor valor do vetor é %d\n", menor(vetor, tam));
}
