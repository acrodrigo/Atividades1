// inverter palavra e verificar se ela é palindromo 
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
	return str1;
}

bool palindromo(char str[], char str2[]){
	

	int i=0, x=0, igual=0;	
		for (i=0, x= 0; (str[i] != '\0')&&(str2[x] != '\0'); i++, x++){
			if (str[i] == str2[x]){
				igual++;
			}
		}
		if(strlen(str)== igual){
			return true;
		}
		else{
			return false;
		}
}

int main(){
	char string[99];
	printf("Digite uma palavra a ser invertida\n");
	gets(string);
	printf("A palavra original é %s e a invertida é  %s \n",  string, inversor(string));
	
	if(palindromo(string, inversor(string))){
		printf(" A duas frases são palindromo \n");
	}
	else{
		printf(" Não é palindromo \n");
	}

}
