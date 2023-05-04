#include <stdio.h>
#include <stdlib.h>
 
typedef struct no {
    int valor;
    struct no *proximo;
} No;
 
void substitui(int x, int y, No *L) {
    if (L == NULL) {
        return;
    } else {
        if (L->valor == x) {
            L->valor = y;
        }
        substitui(x, y, L->proximo);
    }
}
 
void imprime_lista(No *L) {
    while (L != NULL) {
        printf("%d ", L->valor);
        L = L->proximo;
    }
    printf("\n");
}
 
int main() {
    No *n1 = (No *) malloc(sizeof(No));
    No *n2 = (No *) malloc(sizeof(No));
    No *n3 = (No *) malloc(sizeof(No));
    No *n4 = (No *) malloc(sizeof(No));
    n1->valor = 10;
    n1->proximo = n2;
    n2->valor = 20;
    n2->proximo = n3;
    n3->valor = 10;
    n3->proximo = n4;
    n4->valor = 20;
    n4->proximo = NULL;
    printf("Antes da substituição: ");
    imprime_lista(n1);
    substitui(20, 5, n1);
    printf("Depois da substituição: ");
    imprime_lista(n1);
    free(n1);
    free(n2);
    free(n3);
    free(n4);
 
    return 0;
}
