#include <stdio.h>
#include <stdlib.h>
#include <conio.h>




/*float le_nota1(){
	float n1;
	printf("Digite sua nota");
	scanf("%d", &n1);

}*/

float aritmetica(float x, float y){
	float  aritm;
	aritm = (x + y)/2;	
	return aritm;
}

float ponderada(float x, float  y){
	float pond;
	pond = ((x + y) * 2)/3;
	return pond;
}

int main()
{

	float n1, n2;
	printf("Digite sua primeira nota: \n");
	scanf("%f", &n1);
	printf("Digite sua segunda nota: \n");
	scanf("%f", &n2);
			
	printf("A media aritmetica é a seguinte %f",aritmetica(n1,n2)); 	
	printf("A media ponderada é a seguinte %f",ponderada(n1,n2 ));
}

