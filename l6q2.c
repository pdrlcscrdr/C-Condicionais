#include<stdio.h>
#include<locale.h>
//Verifica��o de divis�o exata
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, d;
	printf("Informe o numerador: \n");
	scanf("%i", &n);
	printf("Informe o denominador: \n");
	scanf("%i", &d);
	if(d == 0){
		printf("Divis�o indefinida.");
	}
	else if(n % d == 0){
		printf("A divis�o � exata.");
	}
	else{
		printf("A divis�o n�o � exata.");
	}
	return(0);
}