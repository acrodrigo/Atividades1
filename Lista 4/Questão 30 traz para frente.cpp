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
	return str;
}

int main(){
	char string[20];
	printf("Digite uma frase\n");
	gets(string);

	printf("A a palavra de traz para frente fica assim %s\n",  inversor(string));
	
	

}
