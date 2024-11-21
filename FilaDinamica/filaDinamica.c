#include <stdio.h>
#include <stdlib.h>
#include "filaDinamica.h"

//criação da fila
Fila *criaFila(){
    Fila *fi = (Fila*)malloc(sizeof(Fila));
    if(fi != NULL){//Alocação aconteceu com sucesso
        fi->inicio = NULL;
        fi->fim = NULL;
        fi->qtd = 0;
    }
    return fi;
}
//liberação da fila
void liberaFila(Fila *fi){
    if(fi != NULL){
        No *auxiliar;
        while(fi->inicio = NULL){
            auxiliar = fi->inicio;
            fi->inicio = fi->inicio->prox;
            free(auxiliar);
        }
        free(fi);
    }
}