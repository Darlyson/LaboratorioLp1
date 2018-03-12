#include <stdio.h>
#include <string.h>

#define CONT 1
int i=0;
struct tband{
	char nome[30];
	char tipo[30];
	int participantes;
	int ranking;
};

struct tband band[5];
void cadastrar(){
	int aux=0;
	for(i=0;i<CONT;i++){
		printf("Digite o nome da banda:");
		setbuf(stdin,NULL);
		fgets(band[i].nome, 30, stdin);
		setbuf(stdin,NULL);
		printf("Digite o tipo da banda:");
		setbuf(stdin,NULL);
		fgets(band[i].tipo, 30, stdin);
		setbuf(stdin,NULL);

		printf("Digite o numero de participantes da banda:");
		scanf("%d",&aux);
		band[i].participantes = aux;
		
		printf("Digite o ranking da banda:");
		scanf("%d",&aux);
		band[i].ranking = aux;
	}
	for(i=0;i<CONT;i++){
		printf("O nome da banda: %s\n",band[i].nome);
		printf("O tipo da banda: %s\n",band[i].tipo);
		printf("O numero de participantes da banda: %d\n",band[i].participantes);
		printf("O ranking da banda: %d\n",band[i].ranking);

	}
}
int main(){
	cadastrar();



}
