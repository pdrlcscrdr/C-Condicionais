#include<stdio.h> 
#include<locale.h>
//Calculadora simples com fun��o SWITCH
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	int op;
	printf("Digite um n�mero.\n");
	scanf("%f", &n1);
	printf("Digite outro n�mero.\n");
	scanf("%f", &n2);
	printf("Escolha uma opera��o:\n");
	printf("1 - Adi��o\n");
	printf("2 - Subtra��o\n");
	printf("3 - Multiplica��o\n");
	printf("4 - Divis�o\n");
	scanf("%i", &op);
	switch(op){
		case 1:
			printf("O resultado �: %f \n", n1 + n2);
		break;
	case 2:
			printf("O resultado �: %f \n", n1 - n2);
		break;
	case 3:
			printf("O resultado �: %f \n", n1 * n2);
		break;
	case 4:
		if(n2 != 0){
			printf("O resultado �: %f \n", n1 / n2);
		}
		else{
		printf("A divis�o � indefinida.\n");
		}
		break;
	default:
	printf("Opera��o inv�lida");
	break;
	}
	return(0);
}