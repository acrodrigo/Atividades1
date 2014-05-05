#include<stdio.h>
int main() {
	int idade;
	printf("Digite sua idade\n");
	scanf("%d", &idade);
		if (idade<12)
			{ printf("voçê é uma criança ");
			}
		else
			if ( idade <18)
			{ printf("Voçê é adolescente");
			}
			else
			{	printf("Voçê é um adulto");
			}
}
