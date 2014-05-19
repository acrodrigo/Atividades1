#include<conio.h>
#include<stdio.h>

char* substituir(char x[]){
	int i;
	for(i=0; (x[i] != '\0'); i++)
			{
			if(x[i]== '0')
				{
				x[i]= '1';	
				}
			}
	return x;
}

int main(){
	char str[15];
	printf("Digite um string\n");
	scanf("%s", &str);
	printf("Depois das alterações a string fica assim %s ", substituir(str));
}
	
