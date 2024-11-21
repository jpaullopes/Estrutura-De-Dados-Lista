struct aluno { // Estrutura de dados do aluno
    int matricula;
    char nome[30];
    float n1, n2, n3;
};	
typedef struct aluno Aluno;

struct no{ // Estrutura de dados do nó
    Aluno dados;
    struct no *prox;
};

typedef struct no No;

typedef struct fila{ // Estrutura de dados da fila | uso de nó descritor
    No *inicio;
    No *fim;
    int qtd;
}Fila;

//criação da fila
Fila *criaFila();
//liberação da fila
void liberaFila(Fila *fi);
