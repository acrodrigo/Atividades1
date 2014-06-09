#include<stdio.h>
#include<conio.h>
#define n 10

void soma(int a[], int b[]){
	int res[n], *p, *q, *r;
	
	
	for(p=a; p< a+n; p++ ){
		for(q=b; q< b+n; q++ ){
			for(r=res; r< res+n; r++ ){
				r= p + q;
			}
		}
	}
		
	for(r=res; r< res+n; r++ ){
		printf("%d", r);
		}

		
}






int main(){

	int vetor[n], i, *p, vetor2[n], *q, *r, ;
	
	for(p=vetor; p< vetor+n; p++ ){
		printf("Digite valores para o vetor\n");
		scanf("%d", p);
	}

	for(q=vetor; q< vetor+n; q++ ){
		printf("Digite valores para o vetor\n");
		scanf("%d", q);
	}
	
	soma(vetor, vetor2);

	


}

