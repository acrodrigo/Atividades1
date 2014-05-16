#include<stdio.h>
#include<conio.h>
	int main(){
		int ida, tt;
		printf("Digite sua idade ");
		scanf("%d", &ida);
		printf("Digite seus anos trabalhados ");
		scanf("%d", &tt);
			if ((ida>=65)||(tt>=30))
				{
				printf("Pode se Aposentar  !!\n");
				}
				if((ida==60)&&(tt==25))
					{
						printf("Pode se Aposentar  !!\n");
					}
					if(!((ida>=65)||(tt>=30)&&(ida>=65)||(tt>=30)))
					{
						printf("Ainda não pode se aposentar !!\n");
					}
	}
