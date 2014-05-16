#include<stdio.h>
#include<conio.h>
#define p 780.000		
	int main(){
		float g1, g2, g3;
		g1 = (p*0.46);
		g2 = (p*0.32);
		g3 = p - (g1+g2);
		printf("O Primeiro ganhador levou %f.\n", g1);
		printf("O Segundo ganhador levou %f.\n", g2);
		printf("O Terceiro ganhador levou %f.\n", g3);
	}
