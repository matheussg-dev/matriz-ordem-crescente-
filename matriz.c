#include <stdio.h>

char matrizCrecente[int quantidade];

int matrizbase();
void bublesort();

int main() {
    
    int tamanho;
    
    printf("Defina o tamanho da matriz.\n");
    scanf("%i", &tamanho);
    
    matrizbase(tamanho);
    
}

int matrizbase(int quantidade) {
    
    int linha;
    char matrizCrecente[int quantidade];
    
    printf("Tamanho da matriz.\n");
    scanf("%i", &quantidade);
    
    
    for (linha = 0; linha < quantidade; linha++) {
        matrizCrecente[linha];

        printf("\nnumeros {%d}\n", linha);
        scanf("%i", &matrizCrecente[linha]);
    }
}

void bublesort() {
    
}
