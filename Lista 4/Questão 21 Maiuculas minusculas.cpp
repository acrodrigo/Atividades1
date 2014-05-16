/* Converter cadeia de caracteres de miusculas para menusculas*/
#include<stdio.h>
#include<conio.h>
#include<string.h>


/*char* substituir_vogais(){
	char caracter[99];
	printf("Digite uma cadeia de caracteres maiusculos");
	scanf("%s", &caracter[99]);
	
	return caracter;
}*/

int main(){
	char caracter[99];
	printf("Digite uma string de letras \n");
	gets(caracter);
	printf("A string inserida convertida para minusculo fica assim. \n%s \n", strlwr(caracter));
}	
