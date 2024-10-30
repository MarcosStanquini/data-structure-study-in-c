#include <stdio.h>

#define MAX 100

void preencherVetor(int vetor[], int tamanho, int numero)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Preencha o vetor %d, posição %d: ", numero, i + 1);
        scanf("%d", &vetor[i]);
    }
}

void calculaProduto(int vetor1[], int vetor2[], int matriz[MAX][MAX], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            matriz[i][j] = vetor1[i] * vetor2[j];
        }
    }
}

void exibirMatriz(int matriz[MAX][MAX], int tamanho)
{
    printf("Matriz de Produto Externo:\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int tamanho;
    int vetor1[MAX], vetor2[MAX], matriz[MAX][MAX];

    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    if (tamanho > MAX)
    {
        printf("Erro: Tamanho excede o limite de %d.\n", MAX);
        return 1;
    }

    preencherVetor(vetor1, tamanho, 1);
    preencherVetor(vetor2, tamanho, 2);

    calculaProduto(vetor1, vetor2, matriz, tamanho);
    exibirMatriz(matriz, tamanho);

    return 0;
}
