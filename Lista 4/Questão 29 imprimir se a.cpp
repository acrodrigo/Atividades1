#include<stdio.h>
#include<conio.h>


char *imprime(char x[]){
	if((x[0]=='a')||(x[0]=='A')){
		return x;
	}
}


int main(){
	char palavra[20];
	printf("Digite uma palavra");
	gets(palavra);
	printf("%s",imprime(palavra));
}
 
