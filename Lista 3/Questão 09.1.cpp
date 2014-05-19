#include<stdio.h>
#include<conio.h>

void com_for(){
	int i;
	for(i=1; i<101; i++) printf(" Com FOR  %d\n", i);
}

void com_while(){
	int i=0;
	while(i<100)
		{
		i++;
		printf("Com While %d\n", i);
		}
}

void com_do_while(){
	int i=0;
	do{
		i++;
		printf("Com do while %d\n", i);	
		}while(i<100);
}	
	
int main(){
	com_for();		
	com_while();
	com_do_while();
}
