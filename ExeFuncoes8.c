#include<stdio.h>
void primo(num)
{	int i, j, d;
	for(i=0;i<1;i++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		d=0;
			for(j=1;j<=num;j++) {
				if(num%j == 0){
					d++;
				}
			}
			if(d==2){
				printf("\nPrimo");
			}
			else{	
				printf("\nNao primo");
			}
	}
}

int main(){
	int num;
	primo(num);
	printf("\n%d",num);
}
