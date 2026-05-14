#include <stdio.h>

int main() {
    int pilha[5];
    int topo = -1;

    // Push
    topo++;
    pilha[topo] = 10;

    topo++;
    pilha[topo] = 20;

    topo++;
    pilha[topo] = 30;

    printf("Topo da pilha: %d\n", pilha[topo]);

    // Pop
    printf("Removido: %d\n", pilha[topo]);
    topo--;

    printf("Novo topo: %d\n", pilha[topo]);

    return 0;
}