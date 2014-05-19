#include<stdio.h>

void pares(){
	int i, a, res, c;
	i=a=res=0;
		
		while(i<50)
			{
			a = a +2;
			res += a;
			printf("Esses são os ciquenta primeiros pares %d\n", a);
			printf("%d\n", res);
			i++;
			}
				
			c = res;
			printf ("A soma dos 50 primeiros pares é %d\n", c);
}

int main(){
	pares();
	}
	
