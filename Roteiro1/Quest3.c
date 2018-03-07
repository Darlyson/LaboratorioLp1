#include <stdio.h>
#include <string.h>
int main () {
	char palin[20];
	int i=0,x,y=0;
	printf("Digite a palavra a ser verificada\n");
	scanf("%s",palin);	
	x=strlen(palin)-1;
	for(x;0<x;x--){
		y++;
		if(palin[i]==palin[x]){
			i++;
		}else {
			printf("A palavra não e palindroma\n");
			break;
		}
	}
	if(i==y){
		printf("A palavra e palindroma\n");
	}
}
