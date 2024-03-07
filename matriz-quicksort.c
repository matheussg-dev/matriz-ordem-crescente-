#include <stdio.h>
#include <stdlib.h>

void matrizbase(int quantidade);
void quicksort(int matrizVerificar[], int inicio, int fim, int posicao);
void imprimirMatriz(int matrizVerificar[], int posicao);
void busca(int matrizVerificar[], int posicao);

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
    
    printf("\n");
    
    busca(matrizVerificar, posicao);
}

void busca(int matrizVerificar[], int posicao) {
    
    int resposta = 0;
    int target;
    int indice = 0;

    printf("Você gostaria de buscar um número da matriz.\n");
    printf("Sim: 1\nNao: 2\n");
    scanf("%i", &resposta);

    if (resposta == 1) {
        printf("Escolha o número que você quer encontrar na matriz.\n");
        scanf("%i", &target);
    } else if (resposta == 2) {
        printf("Encerrando.\n");
        exit(0);
    } else {
        printf("Opção inválida.\n");
        return busca(matrizVerificar, posicao);
    }
    
    printf("%i-target\n", target);
    printf("%i-posicao\n", posicao);
    
    for (int linha = 0; linha < posicao; linha++) {
        if (matrizVerificar[linha] == target) {
        indice = 1;
        printf("%i-indice\n", indice);
        printf("%i-linha\n", linha);
        }
    }
    
    if(indice == 1) {
        printf("posicao foi encontrada.");
    } else {
        printf("b");
    }
}