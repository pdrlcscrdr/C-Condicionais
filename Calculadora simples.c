#include<stdio.h> 
#include<locale.h>
//Calculadora simples com função SWITCH
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	int op;
	//Solicitação dos operandos
	printf("Digite um número.\n");
	scanf("%f", &n1);
	printf("Digite outro número.\n");
	scanf("%f", &n2);
	//Escolha da operação 
	printf("Escolha uma operação:\n");
	printf("1 - Adição\n");
	printf("2 - Subtração\n");
	printf("3 - Multiplicação\n");
	printf("4 - Divisão\n");
	scanf("%i", &op);
	//Efetuando a operação e exibição da resposta
	switch(op){
		case 1:
			printf("O resultado é: %f \n", n1 + n2);
		break;
	case 2:
			printf("O resultado é: %f \n", n1 - n2);
		break;
	case 3:
			printf("O resultado é: %f \n", n1 * n2);
		break;
	case 4:
		if(n2 != 0){
			printf("O resultado é: %f \n", n1 / n2);
		}
		else{
		printf("A divisão é indefinida.\n");
		}
		break;
	default:
	printf("Operação inválida");
	break;
	}
	return(0);
}
