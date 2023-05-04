#include <stdio.h>
#include <stdlib.h>
 
typedef struct no {
    int valor;
    struct no *proximo;
} No;
 
No *inversa(No *L) {
    No *anterior = NULL;
    No *atual = L;
    No *proximo = NULL;
    while (atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    return anterior;
}
 
int main() {
    No *n1 = (No *) malloc(sizeof(No));
    No *n2 = (No *) malloc(sizeof(No));
    No *n3 = (No *) malloc(sizeof(No));
    n1->valor = 7;
    n1->proximo = n2;
    n2->valor = 9;
    n2->proximo = n3;
    n3->valor = 2;
    n3->proximo = NULL;
    No *resultado = inversa(n1);
    printf("Lista inversa: ");
    while (resultado != NULL) {
        printf("%d ", resultado->valor);
        resultado = resultado->proximo;
    }
    printf("\n");
    free(n1);
    free(n2);
    free(n3);
    
    return 0;
}
