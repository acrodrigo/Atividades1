/* frase invertida */
#include<stdio.h>
#include<conio.h>
#include <string.h>
#include<malloc.h>

char* inversor(char str[]){
		int i=0;
		int x=0;
		char* str1=(char*)malloc(strlen(str));
			for(i=(strlen(str)-1); str[i]!='\0' ;i--, x++){
				str1[x]= str[i];
			}
			str= str1;
			while(str[i] != '\0'){
			if((str[i]== 'a')){
			str[i]= '*';
			}
			i++;
			}
	return str;
}

int main(){
	char string[99], string1[99];
	printf("Digite uma frase\n");
	gets(string);
	printf("Digite uma frase\n");
	gets(string1);
	printf("A frase invertida e com a vogal 'a' substituida por '*' fica assim %s\n",  inversor(string));
	printf("A frase invertida e com a vogal 'a' substituida por '*' fica assim %s\n",  inversor(string1));
	

}
