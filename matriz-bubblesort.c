#include <stdio.h>

void matrizbase(int quantidade);
void bubblesort(int matrizVerificar[], int linhas);

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
        printf("\nDigite o número para a posição [%d].", linha);
        scanf("%d", &matrizCrescente[linha]);
    }

    printf("\nMatriz");
    for (linha = 0; linha < quantidade; linha++) {
        printf(" [%d]", matrizCrescente[linha]);
    }

    bubblesort(matrizCrescente, quantidade);
    
}

void bubblesort(int matrizVerificar[], int linhas) {
    
    int i, j, veri;

    for (i = 0; i < linhas - 1; i++) {
        for (j = 0; j < linhas - i - 1; j++) {
            if (matrizVerificar[j] > matrizVerificar[j + 1]) {
                veri = matrizVerificar[j];
                matrizVerificar[j] = matrizVerificar[j + 1];
                matrizVerificar[j + 1] = veri;
            }
        }
    }

    printf("\n\nMatriz ordenada.");
    
    for (i = 0; i < linhas; i++) {
        printf(" [%d]", matrizVerificar[i]);
    }
}