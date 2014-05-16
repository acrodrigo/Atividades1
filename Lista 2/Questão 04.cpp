#include<stdio.h>
#include<conio.h>
	int main(){
		float sal, sal1;
		printf("Digite o valor do seu sálario.\n");
		scanf("%f", &sal);
		sal1 = sal + (sal*0.25);
		printf("Seu sálario com bonus de 25% é %.2f.", sal1);
	}
