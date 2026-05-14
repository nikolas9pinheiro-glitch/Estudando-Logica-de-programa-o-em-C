#include <stdio.h>

// Função fatorial fora da main
int fatorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int num;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    printf("O valor fatorial é: %d\n", fatorial(num));

    return 0;
}
