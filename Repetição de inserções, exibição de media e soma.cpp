#include <stdio.h>

int main(){

int num;
float media;
float soma;

for (int i = 0; i < 5; i++){
    float num;
    printf("Digite o numero %d: ", i+1);
    scanf("%f", &num);
soma += num;
media = soma / 5;
}

printf("\nA soma e: %.2f", soma);
printf("A media e: %.2f", media);

}
