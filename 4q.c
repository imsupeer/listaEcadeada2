#include <stdio.h>
#include <stdlib.h>
 
typedef struct no {
    int valor;
    struct no *proximo;
} No;
 
int soma(No *L) {
    if (L == NULL) {
        return 0;
    } else {
        return L->valor + soma(L->proximo);
    }
}
 
int main() {
    No *n1 = (No *) malloc(sizeof(No));
    No *n2 = (No *) malloc(sizeof(No));
    No *n3 = (No *) malloc(sizeof(No));
    No *n4 = (No *) malloc(sizeof(No));
    n1->valor = 3;
    n1->proximo = n2;
    n2->valor = 1;
    n2->proximo = n3;
    n3->valor = 5;
    n3->proximo = n4;
    n4->valor = 4;
    n4->proximo = NULL;
    int resultado = soma(n1);
    printf("Soma: %d\n", resultado);
    free(n1);
    free(n2);
    free(n3);
    free(n4);
 
    return 0;
}
