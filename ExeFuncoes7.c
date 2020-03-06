#include<stdio.h>
int fatorial (int a){
	if(a>1){
		return fatorial(a-1)*a;
	}
	else{
		return 1;
	}
}

int main(){
	int a = 0;
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("\nO fatorial de %d = %d\n",a,fatorial(a));
	return 0;
}
