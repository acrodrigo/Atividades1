#include<stdio.h>
#include<conio.h>
	int main(){
		float mas, alt, imc;
		printf("Insira seu peso\n");
		scanf("%f", &mas);
		printf("Insira sua altura\n ");
		scanf("%f", &alt);
		imc = (mas/(alt*alt));
		printf("Seu IMC é de %f \n", imc);
			if(imc<18.5)
				{
				printf("Voçê esta abaixo do peso.\n");
				}
			if(imc<25.0)
				{
				printf("Você está no peso ideal.\n");
				}	
			if(imc<30.0)
				{
				printf("Você acima no peso .\n");
				}
			if(imc<35.0)
				{
				printf("Você na Obesidade Grau I.\n");
				}
			if(imc<40.0)
				{
				printf("Você na Obesidade Grau II (Severa).\n");
				}			
			if(imc>=40.0)
				{
				printf("Você na Obesidade Grau III (Morbida).\n");
				}		
	}

