#include<stdio.h>
#include<locale.h> 
//Escreva um programa que solicita e l� um valor inteiro e informa se ele � positivo, negativo ou neutro.
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero inteiro.\n");
	scanf("%i", &n);
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