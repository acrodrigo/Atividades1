/*retirar espaço vazio da string*/
#include<stdio.h>
#include<conio.h>
#include <string>	
#include<malloc.h>

char* sem_espaco(char str[]){
	int i=0;
	char* novo=(char*)malloc(99 *sizeof(char));
	for(i=0; str[i]!= '\0'; i++){
		if(str[i]!=' '){
			novo[99]= +str[i];
		}
	}
	
	
	return novo;
}




int main(){
	
	char string[99];
	printf("Digite uma string\n");
	gets(string);
	
	printf("%s", sem_espaco(string));
}
