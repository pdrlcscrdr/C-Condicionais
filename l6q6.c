#include<stdio.h>
#include<locale.h>
//C�lculo da m�dia de um aluno
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
		printf("Voc� est� aprovado com m�dia %.1f. \n", mp);
	}
	else if(mp >= 3.5 && mp < 7.0){
		printf("Sua m�dia parcial foi %.1f , ent�o voc� precisa da nota da avalia��o final.\n", mp);
		printf("Digite a nota da avalia��o final: \n");
	    scanf("%f", &af);
	    mf = ((6 * mp) + (4 * af)) / 10;
	    if(mf >= 5.0){
			printf("Voc� foi aprovado com m�dia %.1f. \n", mf);
		}
		else{
			printf("Voc� foi reprovado.\n");
		}
		}
		

	return(0);
}