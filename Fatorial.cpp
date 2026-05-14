#include <stdio.h>

// Função recursiva para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int num;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);

    printf("O fatorial de %d e: %d\n", num, fatorial(num));

    return 0;
}
