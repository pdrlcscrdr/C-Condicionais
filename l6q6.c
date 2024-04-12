#include<stdio.h>
#include<locale.h>
//Cálculo da média de um aluno
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, mp, af, mf;
	printf("Digite a n1: \n");
	scanf("%f", &n1);
	printf("Digite a n2: \n");
	scanf("%f", &n2);
	printf("Digite a n3: \n");
	scanf("%f", &n3);
	mp = (n1 + n2 + n3) / 3;
	if(mp >= 7.0){
		printf("Você está aprovado com média %.1f. \n", mp);
	}
	else if(mp >= 3.5 && mp < 7.0){
		printf("Sua média parcial foi %.1f , então você precisa da nota da avaliação final.\n", mp);
		printf("Digite a nota da avaliação final: \n");
	    scanf("%f", &af);
	    mf = ((6 * mp) + (4 * af)) / 10;
	    if(mf >= 5.0){
			printf("Você foi aprovado com média %.1f. \n", mf);
		}
		else{
			printf("Você foi reprovado.\n");
		}
		}
		

	return(0);
}