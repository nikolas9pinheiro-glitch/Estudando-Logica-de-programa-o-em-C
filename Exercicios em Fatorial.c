#include <stdio.h>

// Função recursiva para somar de 1 até N
int soma(int n) {
    if (n == 1) {
        return 1;
    }

    return n + soma(n - 1);
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("A soma de 1 até %d é: %d\n", num, soma(num));

    return 0;
}


refaz o codigo pedindo 5 fatorial 

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

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    printf("O fatorial de %d é: %d\n", num, fatorial(num));

    return 0;
}
