#include <stdio.h>
#include <conio.h>
#define tam 3	

int* maior(int lis[]){
	int i=0 ;
	for(i=0; i<tam ;i++)
		{
			if(lis[i]<0)
			{
			lis[i]=0;
			}
		}
	return lis;
}

int main(){
	int lis[tam];
	int i;/*,maior=0, menor= lis[i], soma=0, cont=0, par=0;*/
		for(i=0;i<tam;i++)
		{
		printf("Insira um elemento %d: ", i);
		scanf("%d", &lis[i] );
		}
	printf("A lista ficous assim %d\n", maior(lis));		
}
	
