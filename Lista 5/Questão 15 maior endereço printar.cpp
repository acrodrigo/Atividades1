#include<stdio.h>
#include<conio.h>



 
int maior_end(int a, int b){
	int *p , *q;
	p = &a;
	q = &b;
	
	if(p>q){
		return *p;
	}else{
		return *q;
	}
}




int main(){
	int x, y;
	
	printf("Digite um valor para a \n");
	scanf("%d", &x);
	printf("Digite um valor para b \n");
	scanf("%d", &y);

	printf("O valor do maior endereço é %p", maior_end(x,y));

}
