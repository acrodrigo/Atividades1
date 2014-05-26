#include<stdio.h>
#include<conio.h>
void nome(){
	char aluno[20];
	int i;
	printf("Digite um nome\n");
	gets (aluno);	
		for (i=0; i<4; i++){
		printf("%c", aluno[i]);
		}
}

int main(){
	nome();
}
