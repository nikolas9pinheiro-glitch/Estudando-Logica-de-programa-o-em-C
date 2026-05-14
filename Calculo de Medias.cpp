#include <stdio.h>

int main(){

int i;
float n1;
float n2;
float n3;
float Mediafinal;

printf("Insira a primeira nota:\n");
scanf("%f", &n1);

printf("Insira a segunda nota:\n");
scanf("%f", &n2);

printf("Insira a terceira nota:\n");
scanf("%f", &n3);

Mediafinal = (n1+n2+n3)/3;

for(i=0; i<30; i++){
    printf("-");
}

printf("\nMedia Final: %.2f\n", Mediafinal);

if (Mediafinal >= 6.0){
    printf("\nAprovado!\n");
}
else if (Mediafinal < 6.0){   
    printf("\nReprovado!\n");
}

for(i=0; i<30; i++){
    printf("-");
}



return 0 ;

}


