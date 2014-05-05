#include<stdio.h>
#include<conio.h>
int main(){
	float ht, hv, sal;
	printf("Valor da hora trabalhada.\n");
	scanf("%f", &hv);
	printf("Quantidades de horas trabalhadas.\n");
	scanf("%f", &ht);
	sal = ht * hv;
	printf("Seu salário é de %.2f", sal);
	 
}
