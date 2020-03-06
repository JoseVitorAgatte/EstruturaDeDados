#include <stdio.h>
int vogal(char c){
	
	printf("Digite um caracter: ");
	scanf("%s",&c);
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
		printf("\nE vogal");
	}
	else{
			printf("\nNao e vogal");
	}
}

int main(){
	char c;
	printf("\n%c",vogal(c));
	return 0;
}
