#include <stdio.h>
#include <stdlib.h>
 
typedef struct no {
    int valor;
    struct no *proximo;
} No;
 
int ocorrencias(int x, No *L) {
    int contador = 0;
    No *atual = L;
    while (atual != NULL) {
        if (atual->valor == x) {
            contador++;
        }
        atual = atual->proximo;
    }
    return contador;
}
 
int main() {
    No *n1 = (No *) malloc(sizeof(No));
    No *n2 = (No *) malloc(sizeof(No));
    No *n3 = (No *) malloc(sizeof(No));
    No *n4 = (No *) malloc(sizeof(No));
    No *n5 = (No *) malloc(sizeof(No));
    n1->valor = 1;
    n1->proximo = n2;
    n2->valor = 2;
    n2->proximo = n3;
    n3->valor = 1;
    n3->proximo = n4;
    n4->valor = 4;
    n4->proximo = n5;
    n5->valor = 1;
    n5->proximo = NULL;
    int resultado = ocorrencias(1, n1);
    printf("Contagem de 1 na lista: %d\n", resultado);
    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    
    return 0;
}
