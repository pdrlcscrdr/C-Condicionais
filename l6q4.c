#include<stdio.h>
#include<locale.h>
//Preços de maçãs
int main(){
	setlocale(LC_ALL, "Portuguese");
	int q;
	float p;
	printf("Quantas maçãs você quer?\n");
	scanf("%i", &q);
	if(q >= 12){
		p = q * 1.10;
	}
	else{
		p = q * 1.30;
	}
	printf("O preço a ser pago é: R$%.2f. \n", p);
	return(0);
}