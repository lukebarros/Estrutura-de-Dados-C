#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n, i;
	
	printf("Digite a quantidade de alunos na turma: ");
	scanf("%d", &n);
	float av1[n], av2[n], media[n];
	char situacao[n][20];
	char nome[n][20];
	
	for (i=0;i<n;i++){
    	printf("Digite o nome do aluno: ");
    	scanf("%s", nome[i]);
    	printf("Digite a nota da AV1: ");
    	scanf("%f", &av1[i]);
    	printf("Digite a nota da AV2: ");
    	scanf("%f", &av2[i]);
    	media[i] = (av1[i]+av2[i])/2;
    	if (media[i] >= 7)
    		strcpy(situacao[i], "Aprovado");
    	else if (media[i] >= 4)
    		strcpy(situacao[i], "Recuperacao");
    	else
    		strcpy(situacao[i], "Reprovado");
	}
    	printf("Nomes\t\t AV1\t\t AV2\t\t Media\t\t Situação\n");
    	for (i=0;i<n;i++){
    	    printf("%-12s\t\t\t%8.1f\t\t %8.1f\t\t %8.1f\t\t %-3s\n", nome[i], av1[i], av2[i], media[i], situacao[i]);
    	}
    	return 0;
}