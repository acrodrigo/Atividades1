/*verificar qual comprimento da string*/
#include<stdio.h>
#include<conio.h>
#include <string>	

/*char ler_string(){
	char string[100];
	printf("Digite uma string\n");
	scanf("%c", &string[100]);
	
	return string[100];
}*/

int	 recebe_string(char str[]){
	int i=0;
	while(str[i] != '\0')
		{	i++;
		}
	
	
	return i;
}




int main(){
	
	char string[99];
	printf("Digite uma string\n");
	gets(string);
	/*printf("%c", ler_string());*/
	printf("%d", recebe_string(string));
}
