#include<conio.h>
#include<stdio.h>
#define t 4	
	int main(){
		int a[t], b[t], i ,j, c;
		for(i=0; i<t; i++)
			{
				printf("Digite um valor");
				scanf("%d", &a[i]);
			}
		for(j=0; j<t; j++)	
			{
			if ( (a[j])==(a[j+1]))
				{
				b[j] = a[j];
				printf("O valores repitidos são %d", b[j]);
				}
			}
	}
