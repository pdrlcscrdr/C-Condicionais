#include<stdio.h>
#include<locale.h>
//Preços de maçãs
int main(){
	setlocale(LC_ALL, "Portuguese");
	int q;
	float p;
	//Solicitação da quantidade de maçãs desejada
	printf("Quantas maçãs você quer?\n");
	scanf("%i", &q);
	//Condições para determinar o preço
	if(q >= 12){
		p = q * 1.10;
	}
	else{
		p = q * 1.30;
	}
	//Exibição do preço 
	printf("O preço a ser pago é: R$%.2f. \n", p);
	return(0);
}
