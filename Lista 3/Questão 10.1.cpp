#include<conio.h>
#include<stdio.h>

int ocorrencias(char x[]){
	int i, cont=0;
	for(i=0; (x[i] != '\0'); i++)
			{
			if(x[i]== '1')
				{
				cont++;	
				}
			}
	return cont;
}
	
	int main(){
		char str[15];
		printf("Digite um string \n");
		scanf("%s", &str);
	
	
			printf("São %d ocorrencias de 1 na string digitada.", ocorrencias(str) );
	}
