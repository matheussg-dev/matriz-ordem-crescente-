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
    
    int posicao;
    int direita = linhas - 1;
    int esquerda = 0;
    int referncia = matrizVerificar[0];
    

    while (esquerda <= direita) {
        while (matrizVerificar[esquerda] < referncia) {
            esquerda++;
        }
        while (matrizVerificar[direita] >= referncia) {
            direita--;
        }

        if (esquerda <= direita) {
            int veri = matrizVerificar[esquerda]; 
            matrizVerificar[esquerda] = matrizVerificar[direita];
            matrizVerificar[direita] = veri; // swanp onde e necessario mais um elemento para inverter a ordem
            esquerda++;
            direita--;
            
            //nao precisa de parentes so da matrizVerificar[]
        }
    }

    printf("\n\nMatriz ordenada:");

    for (posicao = 0; posicao < linhas; posicao++) {
        printf(" [%d]", matrizVerificar[posicao]);
    }
}
