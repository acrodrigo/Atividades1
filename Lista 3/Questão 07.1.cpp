#include<stdio.h>
#include<conio.h>

bool primo(int x){
	int c;
	while(c=0 , x/2, c++);
		{
		if (x%2 != 0){
			return true;
		}
		else {
			return false;
		}
	}
}

int main(){
	int p;
	printf("Digite um numero maior que 1 ");
	scanf("%d", &p);
	if (primo(p)){
		printf("É primo");
	}else{
		printf("Não é primo");
	}
}

