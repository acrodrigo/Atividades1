#include<stdio.h>
#include<conio.h>
	int main(){
		float sal, emp;
		printf("Digite o valor de seu sálario \n ");
		scanf("%f", &sal);
		printf("Digite o valor da parcela do emprestimo.\n ");
		scanf("%f", &emp);
			sal = sal*0.20;
			if(emp<sal)
				{
				printf(" Emprestimo Aprovado !!!!");
				}
				else
					{
						printf("Emprestimo Reprovado !!!");
					}	 
	}
