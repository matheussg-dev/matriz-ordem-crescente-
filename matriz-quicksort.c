#include <stdio.h>

void matrizbase(int quantidade);
void quicksort(int matrizVerificar[], int inicio, int fim, int posicao);
void imprimirMatriz(int matrizVerificar[], int posicao);

int main() {
    int tamanho;

    printf("Defina o tamanho da matriz:\n");
    scanf("%i", &tamanho);

    matrizbase(tamanho);

    return 0;
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

    quicksort(matrizCrescente, 0, quantidade - 1, quantidade);
}

void quicksort(int matrizVerificar[], int inicio, int fim, int posicao) {
    
    int direita = fim;
    int esquerda = inicio;
    int referencia = matrizVerificar[inicio];

    while (esquerda <= direita) {
        while (matrizVerificar[esquerda] < referencia) {
            esquerda++;
        }
        while (matrizVerificar[direita] > referencia) {
            direita--;
        }

        if (esquerda <= direita) {
            int verificar = matrizVerificar[esquerda];
            matrizVerificar[esquerda] = matrizVerificar[direita];
            matrizVerificar[direita] = verificar;
            direita--;
            esquerda++;
        }
    }
    
    if (inicio < direita) {
        quicksort(matrizVerificar, inicio, direita, posicao);
    }
    if (esquerda < fim) {
        quicksort(matrizVerificar, esquerda, fim, posicao);
    } else {
        imprimirMatriz(matrizVerificar, posicao);
    }
}

void imprimirMatriz(int matrizVerificar[], int posicao) {
    printf("\n\nMatriz ordenada:");
    for (int linha = 0; linha < posicao; linha++) {
        printf(" [%d]", matrizVerificar[linha]);
    }
}