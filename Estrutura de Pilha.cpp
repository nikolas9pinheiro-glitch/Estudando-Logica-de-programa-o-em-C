#include <stdio.h>

int main() {
int fatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

printf("O fatorial de 5 é: %d\n", fatorial(5));

}
