#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];
    int idade;
    float salario;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    for(int i=0; i<30; i++){
    printf("-");
    }
    
    printf ("\nDADOS DO FUNCIONARIO\n");
    
    for(int i=0; i<30; i++){
    printf("-");
    }

    printf("\n");

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Salario: R$ %.2f\n", salario);

}

