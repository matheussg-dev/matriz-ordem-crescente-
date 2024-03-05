#include <stdio.h>

void matrizbase(int quantidade);
void bublesort(int matrizVereficar[], int linha);

int main() {
    
    int tamanho;
    
    printf("Defina o tamanho da matriz.\n");
    scanf("%i", &tamanho);
    
    matrizbase(tamanho);
    
}

void matrizbase(int quantidade) {
    
    int linha;
    int matrizCrescente[quantidade];

    for (linha = 0; linha < quantidade; linha++) {
        printf("\nDigite o número para a posição [%d]: ", linha);
        scanf("%d", &matrizCrescente[linha]);
    }

    for (linha = 0; linha < quantidade; linha++) {
        printf("[%d]", matrizCrescente[linha]);
    }

    bublesort(matrizCrescente, quantidade);
}

void bubblesort(int matrizVerificar[], int linhas) {
    
    int i, j, temp;

    for (i = 0; i < linhas - 1; i++) {
        for (j = 0; j < linhas - i - 1; j++) {
            if (matrizVerificar[j] > matrizVerificar[j + 1]) {
                temp = matrizVerificar[j];
                matrizVerificar[j] = matrizVerificar[j + 1];
                matrizVerificar[j + 1] = temp;
            }
        }
    }
    
    printf("\nMatriz ordenada.");
    
    for (i = 0; i < linhas; i++) {
        printf(" [%d]", matrizVerificar[i]);
    }
}
