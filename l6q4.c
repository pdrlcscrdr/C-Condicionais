#include<stdio.h>
#include<locale.h>
//Pre�os de ma��s
int main(){
	setlocale(LC_ALL, "Portuguese");
	int q;
	float p;
	printf("Quantas ma��s voc� quer?\n");
	scanf("%i", &q);
	if(q >= 12){
		p = q * 1.10;
	}
	else{
		p = q * 1.30;
	}
	printf("O pre�o a ser pago �: R$%.2f. \n", p);
	return(0);
}