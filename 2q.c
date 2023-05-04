#include <stdio.h>
#include <stdlib.h>
 
typedef struct no {
    int valor;
    struct no *proximo;
} No;
 
int ultimo(No *L) {
    No *atual = L;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
    return atual->valor;
}
 
int main() {
    No *n1 = (No *) malloc(sizeof(No));
    No *n2 = (No *) malloc(sizeof(No));
    No *n3 = (No *) malloc(sizeof(No));
    n1->valor = 10;
    n1->proximo = n2;
    n2->valor = 20;
    n2->proximo = n3;
    n3->valor = 30;
    n3->proximo = NULL;
    int resultado = ultimo(n1);
    printf("Ultimo item da lista: %d\n", resultado);
    free(n1);
    free(n2);
    free(n3);
    
    return 0;
}
