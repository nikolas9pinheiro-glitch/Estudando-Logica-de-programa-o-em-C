#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;
    float nota_final;

    // Exemplo de atribuição de valores
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê o nome do usuário

    printf("Digite a idade: ");
    scanf("%d", &idade); // Lê a idade do usuário

    printf("Digite a altura: ");
    scanf("%f", &altura); // Lê a altura do usuário

    printf("Digite a nota final: ");
    scanf("%f", &nota_final); // Lê a nota final do usuário

    // Exemplo de exibição dos valores
    printf("\nNome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Nota Final: %.2f\n", nota_final);

    return 0;
}