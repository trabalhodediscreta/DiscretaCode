#include <stdio.h>

int main() {
    int m;

    printf("Digite o modulo: ");
    scanf("%d", &m);

    int adicao[m][m];
    int multiplicacao[m][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            adicao[i][j] = (i + j) % m;
            multiplicacao[i][j] = (i * j) % m;
        }
    }

    printf("\nTabela de adicao Modular (mod %d):\n", m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3d ", adicao[i][j]);
        }
        printf("\n");
    }

    printf("\nTabela de multiplicacao Modular (mod %d):\n", m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3d ", multiplicacao[i][j]);
        }
        printf("\n");
    }

    return 0;
}
