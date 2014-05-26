#include<stdio.h>
#include<conio.h>

void aceitar(){
	char sexo;
	int idade;
	printf("Digite m para masculino ou f para feminino\n");
	scanf("%c", &sexo);
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	
	if((sexo == 'f')&&(idade <=25)){
		printf("Voçê esta aceita");
	}else{
		printf("Voçê não esta aceita");
	}
	
}


int main(){
	aceitar();
}
