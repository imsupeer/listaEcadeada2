#include <stdio.h>
#include <stdlib.h>
 
struct lista {
    int valor;
    struct lista *prox;
};
 
int igual(struct lista *A, struct lista *B) {
    if (A == NULL && B == NULL) {
        return 1;
    }
    if (A == NULL || B == NULL) {
        return 0;
    }
    if (A->valor != B->valor) {
        return 0;
    }
    return igual(A->prox, B->prox);
}

 
int main() {
    struct lista *I = NULL;
    struct lista *J = NULL;
    struct lista *K = NULL;
 
    I = malloc(sizeof(struct lista));
    I->valor = 1;
    I->prox = malloc(sizeof(struct lista));
    I->prox->valor = 2;
    I->prox->prox = malloc(sizeof(struct lista));
    I->prox->prox->valor = 3;
    I->prox->prox->prox = NULL;
 
    J = malloc(sizeof(struct lista));
    J->valor = 1;
    J->prox = malloc(sizeof(struct lista));
    J->prox->valor = 2;
    J->prox->prox = malloc(sizeof(struct lista));
    J->prox->prox->valor = 3;
    J->prox->prox->prox = NULL;
 
    K = malloc(sizeof(struct lista));
    K->valor = 1;
    K->prox = malloc(sizeof(struct lista));
    K->prox->valor = 3;
    K->prox->prox = malloc(sizeof(struct lista));
    K->prox->prox->valor = 2;
    K->prox->prox->prox = NULL;
 
    if (igual(I, J)) {
        printf("As listas I e J sao iguais!\n");
    } else {
        printf("As listas I e J sao diferentes!\n");
    }
 
    if (igual(I, K)) {
        printf("As listas I e K sao iguais!\n");
    } else {
        printf("As listas I e K sao diferentes!\n");
    }
 
    free(I->prox->prox);
    free(I->prox);
    free(I);
    free(J->prox->prox);
    free(J->prox);
    free(J);
    free(K->prox->prox);
    free(K->prox);
    free(K);
 
    return 0;
}
