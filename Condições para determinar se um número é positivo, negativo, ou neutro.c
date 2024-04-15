#include<stdio.h>
#include<locale.h> 
//Programa que solicita e lê um valor inteiro e informa se ele é positivo, negativo ou neutro.
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	//Solicitação de um número
	printf("Digite um número inteiro.\n");
	scanf("%i", &n);
	//Condições para resposta
	if(n > 0){
		printf(" + \n");
	}
	else if(n < 0){
		printf(" - \n");
	}
	else{
		printf(" 0 \n");
	}
	return(0);
}
