#include<stdio.h>
void trimestre(int a){
	printf("Digite um numero: ");
	scanf("%d", &a);
	switch(a){
		case(1):
			printf("\nJaneiro");
			break;
		
		case(2):
			printf("\nFevereiro");
			break;
		
		case(3):
			printf("\nMarco");
			break;
		
		default:
			printf("\nValor Invalido");
			break;
	}
}

int main (){
	int a;
	trimestre(a);	
	printf("\n%d", a);

}
