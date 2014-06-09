#include<stdio.h>
#include<conio.h>



 
int maior_end(int a, int b){
	int *p , *q;
	p = &a;
	q = &b;
	
	if(p>q){
		return a;
	}else{
		return b;
	}
}




int main(){
	int x, y;
	
	printf("Digite um valor para a \n");
	scanf("%d", &x);
	printf("Digite um valor para b \n");
	scanf("%d", &y);

	if((maior_end(x,y))==x){
		printf("O endereço de %d é o maior", x);
	}else{
		printf("O endereço de %d é o maior", y);
	}
	

}
