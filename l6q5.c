#include<stdio.h>
#include<locale.h> 
//Escolha de pedidos e c�lculo de pre�o (SWITCH)
int main(){
	setlocale(LC_ALL, "Portuguese");
	float q;
	int cod;
	printf("C�DIGO DO ITEM   ESPECIFICA��O   PRE�O UNIT�RIO \n");
	printf("     100        Cachorro Quente       8,00      \n");
	printf("     101             Bauru            9,00      \n");
	printf("     102            X-Salada         10,00      \n");
	printf("     103           Hamb�rguer        12,00      \n");
	printf("     104        Refrigerante(Lata)    3,00      \n");
	printf("Digite o c�digo do produto desejado. \n");
	scanf("%i", &cod);
	printf("Digite a quantidade desejada. \n");
	scanf("%f", &q);
	switch(cod){
		case 100:
			printf("O valor a ser pago �: %.2f", q * 8);
			break;
		case 101:
			printf("O valor a ser pago �: %.2f", q * 9);
			break;
		case 102:
			printf("O valor a ser pago �: %.2f", q * 10);
			break;
		case 103:
			printf("O valor a ser pago �: %.2f", q * 12);
			break;
		case 104:
			printf("O valor a ser pago �: %.2f", q * 3);
			break;
		default:
			printf("C�digo inv�lido");
			}
	return(0);
}