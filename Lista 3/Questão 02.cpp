#include<stdio.h>
#include<conio.h>
	int main(){
		int op;
		printf("Para Residençia OP 1\n");	
		printf("Para Residençia OP 2\n");
		printf("Para Residençia OP 3\n");
		scanf("%d", &op);
		
		if(op==1)
			{
				int Res(int mor20, int Kwh20);
			}
		if(op==2)
			{
			int Com(int mor11, int Kwh11);
			}		
	
		if(op==3)
			{
				int Ind(int mor12, int Kwh12);
			}
		if((op!=1)&&(op!=2)&&(op!=3))
		{
			printf("Operação invalida");
		}	
	}
	
	
	
		int Res(int mor20, int Kwh20){
			int mor, kwh, cons;
			printf("Digite o numero de moradores\n");
			scanf("%d", &mor);
			printf("Digite a quantidade de Kwh\n");
			scanf("%d", &kwh);
			cons = cons + kwh; 
			return cons;
		}
		
		int Com(int mor11, int Kwh11){
			int mor1, kwh1, cons1;
			printf("Digite o numero de moradores\n");
			scanf("%d", &mor1);
			printf("Digite a quantidade de Kwh\n");
			scanf("%d", &kwh1);
			cons1 = cons1 + kwh1; 
			return cons1;
		}
		
		int Ind(int mor12, int Kwh12){
			int mor2, kwh2, cons2;
			printf("Digite o numero de moradores\n");
			scanf("%d", &mor2);
			printf("Digite a quantidade de Kwh\n");
			scanf("%d", &kwh2);
			cons2 = cons2 + kwh2; 
			return cons2;
		}
