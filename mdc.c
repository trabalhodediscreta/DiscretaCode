#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (b > a) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("\nAplicando o Teorema de Euclides para encontrar o MDC de %d e %d:\n", a, b);

    while (b != 0) {
        resto = a % b;
        printf("%d = %d x (%d) + %d\n", a, b, a / b, resto);
        a = b;
        b = resto;
    }

    printf("\nO Maximo Divisor Comum (MDC) eh: %d\n", a);

    return 0;
}
