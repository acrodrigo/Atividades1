#include<stdio.h>
#include<conio.h>
	int main(){
		float ven;
		printf("Digite o valor que você vendeu este mês ");
		scanf("%f", &ven);
			if(ven<20000.00)
				{
				printf("Sua comissão é de R$400.00 + R$%2.f \n", ven*0.14);
				printf("Totalizando R$%2.f", 400.00+(ven*0.14));
				}
			if(ven<40000.00)
				{
				printf("Sua comissão é de R$500.00 + R$%2.f ", ven*0.14);
				printf("Totalizando R$%2.f", 500.00+(ven*0.14));
				}	
	
			if(ven<60000.00)
				{
				printf("Sua comissão é de R$550.00 + R$%2.f ", ven*0.14);
				printf("Totalizando R$%2.f", 550.00+(ven*0.14));
				}		
			if(ven<80000.00)
				{
				printf("Sua comissão é de R$600.00 + R$%2.f ", ven*0.14);
				printf("Totalizando R$%2.f", 600.00+(ven*0.14));
				}		
			if(ven<100000.00)
				{
				printf("Sua comissão é de R$650.00 + R$%2.f ", ven*0.14);
				printf("Totalizando R$%2.f", 650.00+(ven*0.14));
				}		
			if(ven>100000.00)
				{
				printf("Sua comissão é de R$700.00 + R$%2.f ", ven*0.16);
				printf("Totalizando R$%2.f", 700.00+(ven*0.16));
				}		
			
			
	}
