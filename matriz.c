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

void bublesort(int matrizVereficar[], int linha) {
    
    if(matrizVereficar[0] > matrizVereficar[1]) {
        (matrizVereficar[0], matrizVereficar[1]) = (matrizVereficar[1], matrizVereficar[0]);
    }
    
}