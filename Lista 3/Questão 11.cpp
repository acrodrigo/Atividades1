#include<conio.h>
#include<stdio.h>
	int main(){
		char str[15];
		int i=0;
		printf("Digite um string\n");
		scanf("%s", &str);
		while(str[i] != '\0' )
			{
			if (str[i]== '0')
				{
					str[i]= '1';
				}
			i++;
			}		
	
			printf("Depois das alterações a string fica assim %s ", str);
	}
	
