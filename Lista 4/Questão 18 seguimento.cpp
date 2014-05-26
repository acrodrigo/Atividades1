#include<stdio.h>
#include<conio.h>
void nome(){
	char frase[20];
	int i, x ,y;
	printf("Digite uma frase\n");
	gets (frase);	
	printf("Digite posição de inicio do print\n");
	scanf("%d", &x);
	printf("Digite posição de inicio do print\n");	
	scanf("%d", &y);	
		for (i=x; i<=y; i++){
		printf("%c", frase[i]);
		}
}

int main(){
	nome();
}
