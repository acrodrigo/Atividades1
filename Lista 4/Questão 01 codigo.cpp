/* Codigo de cesar*/
#include<stdio.h>
#include<conio.h>
#include <string.h>
char* codigo(char str[]){
		int i=0;
		/*int tam= strlen(str);*/
		for(i=0; i<(strlen(str)); i++){
			if((str[i] != 'x')&&(str[i] != 'y')&&(str[i] != 'z')&&(str[i] != 'u')&&(str[i] != 'v')&&(str[i] != 'w')){
				str[i]= str[i]+3;
			}	
			if(str[i] == 'x'){
				str[i]= str[i]-23;
			}
			if(str[i] == 'y'){
				str[i]= str[i]-23;
			}
			if(str[i] == 'z'){
				str[i]= str[i]-23;
			}
			if(str[i] == 'u'){
				str[i]= 'x';
			}
			if(str[i] == 'v'){
				str[i]= 'y';
			}
			if(str[i] == 'w'){
				str[i]= 'z';
			}

		
		}
	
	return str;
}

int main(){
	char string[99];
	printf("Digite uma frase para ser codificada no codigo de césar \n");
	gets(string);
	printf("A frase condificada no codigo de césar fica assim \n %s\n",  codigo(string));
	
}
