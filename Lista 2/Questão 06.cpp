#include<stdio.h>
#include<conio.h>
#define vd 30
	int main(){
		float d, pg;
		printf("Dias trabalhados do encanador :\n");
		scanf("%f", &d);
		pg = (d*vd)*0.92;
		printf("O valor a ser pago ao encanador é de %.2f.", pg); 
	}	
