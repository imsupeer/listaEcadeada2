#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int data;
    struct node *next;
};
 
typedef struct node Node;
 
int enesimo(int n, Node *list) {
    if (n < 1 || list == NULL) {
        printf("Erro fatal: n invalido ou lista vazia\n");
        exit(1);
    }
 
    if (n == 1) {
        return list->data;
    }
 
    return enesimo(n - 1, list->next);
}
 
int main() {
    Node n1 = {10, NULL};
    Node n2 = {20, NULL};
    Node n3 = {30, NULL};
    Node n4 = {40, NULL};
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
 
    printf("%d\n", enesimo(3, &n1));
    printf("%d\n", enesimo(5, &n1));
 
    return 0;
}
