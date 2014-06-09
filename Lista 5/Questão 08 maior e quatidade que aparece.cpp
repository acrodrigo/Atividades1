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


int quantidade(int v[],int tam){
	int mai, quant=0, i;
	mai = maior(v, tam);
	
	for(i=0; i <tam; i++){
		if(mai == v[i]){
			quant++;
		}
	}
	return quant;
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
		printf("O numero de vezes que ele se repete é %d\n", quantidade(vetor, tam));
}
