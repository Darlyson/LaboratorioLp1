#include <stdio.h>

int main (){
	float inss,b,l;
	printf("Digite seu salario bruto:\n");
	scanf("%f",&b);
	if(b>1350){
		inss=(b*10)/100;
		l=b-inss;
		printf("Seu inss e %.2f e seu salario liquido e %.2f\n",inss,l);
	
	}else if(b>420){
		inss=(b*9)/100;
		l=b-inss;
		printf("Seu inss e %.2f e seu salario liquido e %.2f\n",inss,l);
	
	}else if(b>0){
		inss=(b*8)/100;
		l=b-inss;
		printf("Seu inss e %.2f e seu salario liquido e %.2f\n",inss,l);
		
	}else {
		printf("valor invalido\n");
	}

}