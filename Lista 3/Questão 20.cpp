#include<stdio.h>
#include<conio.h>
#define t 99
#define r 99
	int main(){
		int v1[t], v2[r], i;
		for (i=0; i<=50; i++)
			{
				v1[i]= i;
				printf("Valor %d\n", v1[i]);				
				if(v1[i]%2!=0)
					{
						v2[i]=v1[i];
						printf("Valor r1 %d\n", v2[i]);
					}
			}
		
	}

