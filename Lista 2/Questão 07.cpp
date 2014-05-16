#include<stdio.h>
#include<conio.h>
#include <math.h>	
	int main(){
		float ca, co, hi;
		printf("Digite o valor do cateto adjacente\n");
		scanf("%f", &ca);
		printf("Digite o valor do cateto oposto\n");
		scanf("%f", &co);
		hi = (ca*ca)+(co*co);
		printf("A hipotenusa é igual a %f.", sqrt(hi));
	}
