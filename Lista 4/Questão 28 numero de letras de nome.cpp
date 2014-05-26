#include<stdio.h>
#include<conio.h>

int nome(){
	char aluno[99];
	int i=0, cont =0;
	printf("Digite um nome\n");
	gets (aluno);	
		while(aluno[i]!= '\0'){
		cont++;
		i++;
		}
	return cont;
}

int main(){
	printf("O nome inserido tem %d letras",nome());
}
