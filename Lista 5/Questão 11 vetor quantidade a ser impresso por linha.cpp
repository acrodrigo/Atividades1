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


void imprime_vetor(int x[], int tam, int y){
	
	for(int i=1; i<tam+1; i++){
		printf("%d, ", x[i-1]);
			if(i%y==0){
				printf("\n");
			}
		
	}	
	
}



int main(){
	int tam, i, l;
	printf("Digite o tamanho do vetor\n");
	scanf("%d", &tam);
	printf("Digite o quantidade de numeros a ser imprimido na mesma linha\n");
	scanf("%d", &l);
	
	int vetor[tam];
		for(i=0; i<tam; i++){
			printf("Digite o valor do vetor\n");
			scanf("%d", &vetor[i]);
		} 
	printf("\n");
	imprime_vetor(vetor, tam, l);
	printf("\n");
	printf("O maior valor do vetor é %d\n", maior(vetor, tam));
	
}
