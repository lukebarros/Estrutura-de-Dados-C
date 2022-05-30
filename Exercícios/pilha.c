#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define TAM 10

typedef struct{
    int vet[TAM];
    int topo;
}pilhavet;

void empilha(int valor, pilhavet *p){
    if (p -> topo == TAM -1){
        printf("\nPilha Cheia");
        exit(0);
    }
    p -> topo++;
    p -> vet[p -> topo] = valor;
}

int desempilha(pilhavet *p){
    int aux;
    if (p-> topo < 0){
        printf("\nPilha Vazia");
        exit(1);
    }
    aux = p -> vet[p -> topo];
    p -> topo--;
    return aux*2;
}

int main(){
    pilhavet pilha;
    int valor, i;
    pilha.topo = -1;
    for (i = 0;i < TAM;i++){
        printf("Digite o valor a ser empilhado: \n");
        scanf("%d", &valor);
        empilha(valor, &pilha);
    }
    for (i = 0;i < TAM; i++){
        printf("\n%d", desempilha(&pilha));
    }
}