void maior(int a, int b){
	if(a>b){
		printf("\nMaior: %d", a);
	}
	else{
		printf("\nMaior: %d", b);
	}
}

void diferente(int a, int b){
	if (a==b)
		printf("\nValores iguais sao invalidos\n");
	else 
		return 0;
}

int main(){
    int a, b;
	printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    if(a==b){
    	 diferente(a,b);
		}
    else{
    	maior(a,b);
	}
    return 0;
}
