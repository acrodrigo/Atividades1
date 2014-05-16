/* Contar e substituir vogais*/
#include<stdio.h>
#include<conio.h>



int	 quantidade_vogais(char str[]){
	int i=0;
	int vogais=0;
		while(str[i] != '\0'){
		if((str[i]== 'a')||(str[i]== 'e')||(str[i]== 'i')||(str[i]== 'o')||(str[i]== 'u')){
		vogais++;
		}
		i++;
		}
	return vogais;
}

char* substituir_vogais(char str[], char c){
	int i=0;
		while(str[i] != '\0'){
		if((str[i]== 'a')||(str[i]== 'e')||(str[i]== 'i')||(str[i]== 'o')||(str[i]== 'u')){
		str[i]= c;
		}
		i++;
		}
	return str;
}



int main(){
	char string[99], caracter;
	printf("Digite uma string\n");
	gets(string);
	printf("Digite um caractere que substitua toda as vogais");
	scanf("%c", &caracter);
	printf("A quantidade de vogais na string digitada é : %d\n", quantidade_vogais(string));
	printf("As vogais da string substituida com a letra %c fica assim %s\n", caracter, substituir_vogais(string, caracter));
	
}
