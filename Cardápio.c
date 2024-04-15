#include<stdio.h>
#include<locale.h> 
//Escolha de pedidos e cálculo de preço (SWITCH)
int main(){
	setlocale(LC_ALL, "Portuguese");
	float q;
	int cod, sn;
	//Exibição do cardápio
	do{
	printf("CÓDIGO DO ITEM   ESPECIFICAÇÃO   PREÇO UNITÁRIO \n");
	printf("     100        Cachorro Quente       8,00      \n");
	printf("     101             Bauru            9,00      \n");
	printf("     102            X-Salada         10,00      \n");
	printf("     103           Hambúrguer        12,00      \n");
	printf("     104        Refrigerante(Lata)    3,00      \n");
	//Solicitação do código e da quantidade desejada
	printf("Digite o código do produto desejado. \n");
	scanf("%i", &cod);
	printf("Digite a quantidade desejada. \n");
	scanf("%f", &q);
	//Condições para o cálculo do preço a ser pago
	switch(cod){
		case 100:
			printf("O valor a ser pago é: %.2f", q * 8);
			break;
		case 101:
			printf("O valor a ser pago é: %.2f", q * 9);
			break;
		case 102:
			printf("O valor a ser pago é: %.2f", q * 10);
			break;
		case 103:
			printf("O valor a ser pago é: %.2f", q * 12);
			break;
		case 104:
			printf("O valor a ser pago é: %.2f", q * 3);
			break;
		default:
			printf("Código inválido");
			}
		//Oferecendo a opção de fazer mais um pedido
		printf("\nQuer mais alguma coisa?\n");
		printf("1 - Sim.\n");
		printf("2 - Não.\n");
		scanf("%i", &sn);
	}while(sn == 1);
	return(0);
}
