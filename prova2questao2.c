#include <stdio.h>

// Função que calcula a média dos elementos de um vetor
float calculaMedia(int v[], int n) {
    float soma = 0;

    for (int i = 0; i < n; i++)
        soma += v[i];

    return soma / n;
}

int main() {
    FILE *arq = fopen("numeros.txt", "w");
    if (!arq) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    int v[10];

    // Lê 10 números do usuário e grava no arquivo
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
        fprintf(arq, "%d\n", v[i]);
    }

    fclose(arq);

    // Reabre o arquivo para leitura
    arq = fopen("numeros.txt", "r");
    if (!arq) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    // Lê novamente os 10 números do arquivo
    for (int i = 0; i < 10; i++)
        fscanf(arq, "%d", &v[i]);

    fclose(arq);

    // Exibe os números lidos e a média
    printf("\nNúmeros lidos:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);

    printf("\nMédia: %.2f\n", calculaMedia(v, 10));

    return 0;
}
