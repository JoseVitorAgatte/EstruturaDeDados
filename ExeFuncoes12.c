#include<stdio.h>
void igual(int vet[], int n){

	int i, j, c = 0;

	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
			if(vet[i]==vet[j] && i!=j){
				c+=1;
			}
		}
	}

	if(c!=0){
		printf("\nPossui numeros iguais!");
	}
}
int main(){
	int vet[5];
	int num;
	int i;
	
	for(i=0;i<5;i++){
		printf("\nDigite o %d numero: ",i+1);
		scanf("%d", &num);
	}
	
	igual(vet,5);
	
}
