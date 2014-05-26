#include<stdio.h>
#include<conio.h>
#include <string.h>

char* concatear(char str[], char str2[]){
	int tam, i, j;
	tam = strlen(str)+ strlen(str2);
		for(i=strlen(str), j=0 ; (i< tam) && (str2[j]!= '\0') ; i++, j++){
			str[i] = str2[j];
		}  
	return str;	
}

int main(){
	char palavra[15], palavra1[15];
	
	printf("Digite a primeira palavra \n");
	gets(palavra);
	printf("Digite a segunda palavra \n");
	gets(palavra1);
	
	
	printf("As duas palavras juntas ficam assim  %s \n",   concatear(palavra, palavra1));
	
	

}
