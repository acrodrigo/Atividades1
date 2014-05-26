#include <stdio.h>
#include <conio.h>

void posicao(){
	char string[30], x;
	int i, y;
	printf("Digite uma string \n");
	gets(string);
	printf("Digite um caracter para ser procurado\n");
	scanf("%c", &x);
	printf("Digite a posição para iniciar a busca\n");
	scanf("%d", &y);
	
	
	for(i=y ; string[i] != '\0'; i++){
		if(string[i] == x ){
			printf(" %c esta na posição %d\n", x , i);
		} 
	}
	
}

int main(){
	
	posicao();

}
