#include <stdio.h>

struct Produto {
    char nome[50];
    int quantidade;
    float preco;
};

int main() {

    float valorTotal;
    int i;
    char resposta;

    while (1) {

        struct Produto produto1;

        printf("Digite o nome do produto: ");
        scanf("%s", produto1.nome);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &produto1.quantidade);

        printf("Digite o preco do produto: ");
        scanf("%f", &produto1.preco);

        valorTotal = produto1.quantidade * produto1.preco;

        for (i = 0; i < 30; i++) {
            printf("-");
        }

        printf("\nNome do produto: %s\n", produto1.nome);
        printf("Quantidade: %d\n", produto1.quantidade);
        printf("Preco: %.2f\n", produto1.preco);
        printf("Valor total do produto: %.2f\n", valorTotal);

        for (i = 0; i < 30; i++) {
            printf("-");
        }

        printf("\nDeseja cadastrar outro produto? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            continue;
        } else {
            break;
        }
    }

    return 0;
}
