#include<stdio.h>
#include<conio.h>
	int main(){
	char str1[20], str2[20];
	printf("Digite uma frase.\n");
	gets(str1);
	printf("Digite outra frase.\n");
	gets(str2);
	printf("Primeira frase %s \n ,Segunda frase é %s \n", str1,str2);     
	printf("A segunda da frase 1 é %c e da frase dois é %c", str1[1], str2[1]);
	return(0);	
	
}
