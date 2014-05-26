#include <stdio.h>
#include <conio.h>


char* excluir_char(char str[], char x){
	int i;
	for(i=0 ; str[i] != '\0'; i++){
		if(str[i] == x ){
			str[i]= str[i+1];
		} 
	}
	return str;	
}

int main(){
	
	char palavra[30], x;
	printf("Digite uma palavra \n");
	gets(palavra);
	printf("Digite letra para ser excluida da palavra \n");
	scanf("%c", &x);
	printf("A palavras digitida é %d e sem a letra digitada fica assim  %s \n", palavra, excluir_char(palavra, x));
	
	

}
