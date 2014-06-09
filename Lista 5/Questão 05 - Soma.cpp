#include<stdio.h>
#include<conio.h>

void soma(int a, int b){
	
	a += b;
	printf("%d", a);
}

int main(){
	int a, b;
	printf("Digite uma valor para a\n");
	scanf("%d", &a);
	printf("Digite uma valor para b\n");
	scanf("%d", &b);

	printf("O valor de:\n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);

	printf("A soma de a e b é :\n");
	soma(a, b);

}
