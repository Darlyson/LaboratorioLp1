#include <stdio.h>

int main (){
	int i,c1,c2=1,x;
	printf("Digite ate onde vc quer a sequencia de fibonate:\n");
	scanf("%d",&i);
	printf("1,");
	for(i;2<i;i--){
		x=c2;
		c2=c1+c2;
		c1=x;
		printf("%d,",c1);
	}
	printf("%d.\n",c2);
}
