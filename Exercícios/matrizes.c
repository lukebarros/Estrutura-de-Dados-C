#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i, j, y, x, soma=0;
	
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d", &x);
	printf("Digite o numero de colunas da matriz: ");
	scanf("%d", &y);
	int mat[x][y];
	
	for (i=0;i<x;i++){
	    for (j=0;j<y;j++){
	        printf("Digite o valor do elemento linha %d coluna %d da matriz: ", i+1, j+1);
	        scanf("%d",&mat[i][j]);
	    }
	}
	printf("Somatório da matriz: \n");
	for (i=0;i<x;i++){
	    for (j=0;j<y;j++){
            soma+=mat[i][j];
	    }
	}
	printf("%d", soma);
}