#include <stdio.h>

 int main(){

    int num;
    int i;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &num);

    for(i=0; i<=10; i++){

        printf("%d x %d = %d\n", num, i, num*i);

    }

}
