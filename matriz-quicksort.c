#include <stdio.h>

void matrizbase(int quantidade);
void quicksort(int matrizVerificar[], int linhas);

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

    quicksort(matrizCrescente, quantidade);
    
}

void quicksort(int matrizVerificar[], int linhas) {



    printf("\n\nMatriz ordenada.");
    
    for (i = 0; i < linhas; i++) {
        printf(" [%d]", matrizVerificar[i]);
    }
}