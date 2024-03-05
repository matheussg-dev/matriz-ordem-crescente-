#include <stdio.h>

void matrizbase(int quantidade);
void bublesort();

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

void bublesort() {
    
}