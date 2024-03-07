#include <stdio.h>
#include <stdlib.h>

void matrizbase(int quantidade);
void bubblesort(int matrizVerificar[], int linhas);
void busca(int matrizVerificar[], int posicao);
void buscaInconclusiva(int matrizVerificar[], int posicao, int target);

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

    bubblesort(matrizCrescente, quantidade);
    
}

void bubblesort(int matrizVerificar[], int linhas) {
    
    int i, j, referencia;

    for (i = 0; i < linhas - 1; i++) {
        for (j = 0; j < linhas - i - 1; j++) {
            if (matrizVerificar[j] > matrizVerificar[j + 1]) {
                referencia = matrizVerificar[j];
                matrizVerificar[j] = matrizVerificar[j + 1];
                matrizVerificar[j + 1] = referencia;
            }
        }
    }

    printf("\n\nMatriz ordenada:");
    
    for (i = 0; i < linhas; i++) {
        printf(" [%d]", matrizVerificar[i]);
    }

    busca(matrizVerificar, linhas);

}

void busca(int matrizVerificar[], int posicao) {
    
    int resposta = 0;
    int target;
    int indice = 0;
    int linha;

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
    
    for (int linha = 0; linha < posicao; linha++) {
        if (matrizVerificar[linha] == target) {
            printf("posicao foi encontrada.\n");
            printf("target = %i\n", target);
            printf("outpout = %i\n", linha);
        } else {
            buscaInconclusiva(matrizVerificar, posicao, target);
        }
    }
}

void buscaInconclusiva(int matrizVerificar[], int posicao, int target) {
    
    for (int linha = 0; linha < posicao; linha++) {
        if (target <= matrizVerificar[linha]) {
            printf("posicao nao inclusa.\n");
            printf("target = %i\n", target);
            printf("outpout = %i\n", linha);
        }
    }
}