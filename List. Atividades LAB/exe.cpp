#include<stdio.h>
int main() {
	int idade;
	printf("Digite sua idade\n");
	scanf("%d", &idade);
		if (idade<12)
			{ printf("vo�� � uma crian�a ");
			}
		else
			if ( idade <18)
			{ printf("Vo�� � adolescente");
			}
			else
			{	printf("Vo�� � um adulto");
			}
}
