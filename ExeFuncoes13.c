#include<stdio.h>
void charigual(int n, char c[], char v[]){
	int i, j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(c[i]==v[i]){
				v[i] = '*';
			}
		}
	}
}

