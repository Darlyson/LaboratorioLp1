#include <stdio.h>
#include <string.h>
int main () {
	float altura[10];
	char sexo[10];
	int i=0,maior=0,menor=0;
	float mediaF=0,mediaM=0,y=0,x=0;
	printf("Digite a altura no formato(0.0), depois o sexo no formato(M/F) da pessoa\n");
	for(i=0;i<10;i++){
		printf("Altura:");
		scanf("%f",&altura[i]);
		printf("Sexo:");
		scanf("%s",&sexo[i]);
	}
	i=0;
	maior=i;
	menor=i;
	for(i=0;i<10;i++){	
		if(altura[maior]<altura[i]){
			maior=i;
		}
		if(altura[menor]>altura[i]){
			menor=i;
		}
	}
	printf("A a maior altura e %.2f de sexo %c\n",altura[maior],sexo[maior]);
	printf("A a menor altura e %.2f de sexo %c\n",altura[menor],sexo[menor]);
	for(i=0;i<10;i++){
		if(sexo[i]=='F'){
			y=altura[i];
			mediaF=mediaF+y;
			x++;
		}
	}
	mediaF=mediaF/x;
	printf("A media altura do sexo feminino e %.2f e tem %.1f possoas\n",mediaF,x);
	x=0,y=0;
	for(i=0;i<10;i++){		
		if(sexo[i]=='M'){
			y=altura[i];
			mediaM=mediaM+y;
			x++;
		}
	}
	mediaM=mediaM/x;
	printf("A media altura do sexo masculino e %.2f e tem %.1f possoas\n",mediaM,x);
}
