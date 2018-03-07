#include <stdio.h>
#include <string.h>
int main () {
	char palavra[50];
	int x=0,i,y=0,j;
	printf("Digite a palavra a ser imprimida\n");
	fgets(palavra, 50, stdin);
	x=strlen(palavra);
	for(i=0;i<x;i++){
		for(j=0;j<=y;j++){
			printf("%c",palavra[j]);
		}
		if(y!=x){
		y++;
		}
		printf("\n");
	}
}
