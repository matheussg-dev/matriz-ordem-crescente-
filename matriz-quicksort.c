#include <stdio.h>

void matrizbase(int quantidade);
void quicksort(int matrizVerificar[], int linha, int inicio, int fim);

int main() {

    int tamanho;

    printf("Defina o tamanho da matriz:\n");
    scanf("%i", &tamanho);

    matrizbase(tamanho);
}

void matrizbase(int quantidade) {

    int linha;
    int matrizCrescente[quantidade];

    for (linha = 0; linha < quantidade; linha++) {
        printf("\nDigite o número para a posição [%d]:", linha);
        scanf("%d", &matrizCrescente[linha]);
    }

    printf("\nMatriz:");
    for (linha = 0; linha < quantidade; linha++) {
        printf(" [%d]", matrizCrescente[linha]);
    }

    quicksort(matrizCrescente, quantidade, 0, quantidade - 1);
}

void quicksort(int matrizVerificar[], int linha, int inicio, int fim) {

    int posicao;
    int direita = fim;
    int esquerda = inicio;
    int referencia = matrizVerificar[0];

    while (esquerda <= direita) {
        while (matrizVerificar[esquerda] < referencia) {
            esquerda++;
        }
        while (matrizVerificar[direita] >= referencia) {
            direita--;
        }

        if (esquerda <= direita) {
            int veri = matrizVerificar[esquerda];
            matrizVerificar[esquerda] = matrizVerificar[direita];
            matrizVerificar[direita] = veri;
            direita--;
        }
    }

    if (inicio < direita) {
        quicksort(matrizVerificar, linha, inicio, direita);
    }

    if (esquerda < fim) {
        quicksort(matrizVerificar, linha, esquerda, fim);
    }

    printf("\n\nMatriz ordenada:");
    for (posicao = 0; posicao < linha + 1; posicao++) {
        printf(" [%d]", matrizVerificar[posicao]);
    }
}
