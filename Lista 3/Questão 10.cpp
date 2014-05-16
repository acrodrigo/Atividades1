#include<conio.h>
#include<stdio.h>

	int main(){
		char str[15];
		int i, cont= 0;
		printf("Digite um string \n");
		scanf("%s", &str);
	
		for(i=0; (str[i] != '\0'); i++)
			{
			if(str[i]== '1')
				{
				cont++;	
				}
			}
			printf("São %d ocorrencias de 1 na string digitada.", cont);
	}
