//11. Monte um programa que leia e exiba:

#include <stdio.h>
int main(){

	int i;
    char nome[50];
    int idade;
    float altura;

    printf("Digite o seu nome:\n");
    fgets(nome, 50, stdin);

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
	
	for(i = 0; i < 30; i++) {
        printf("-");
    }
    
	printf("\nO cadastro do usuario e:\n");
	
	for(i = 0; i < 30; i++) {
        printf("-");
    }
    
    printf("\n");
    
    printf("Nome: %s", nome);
    
    printf("Idade: %d\n", idade);
    
    printf("Altura: %.2f\n", altura);
    
    
    return 0;
}
