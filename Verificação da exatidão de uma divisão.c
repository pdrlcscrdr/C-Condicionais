#include<stdio.h>
#include<locale.h>
//Verificação de divisão exata
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, d;
	//Solicitação dos operandos 
	printf("Informe o numerador: \n");
	scanf("%i", &n);
	printf("Informe o denominador: \n");
	scanf("%i", &d);
	//Condições para determinar a exatidão da divisão
	if(d == 0){
		printf("Divisão indefinida.");
	}
	else if(n % d == 0){
		printf("A divisão é exata.");
	}
	else{
		printf("A divisão não é exata.");
	}
	return(0);
}
