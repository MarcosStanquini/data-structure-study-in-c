#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 8

void preencherMatrizAleatorio(int matriz[MAX][MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            matriz[i][j] = rand() % 2;
        }
    }
}

void exibirMatrizAleatorio(int matriz[MAX][MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");  
    }
}

int main()
{
    int matriz[MAX][MAX] = {0};
    preencherMatrizAleatorio(matriz);
    exibirMatrizAleatorio(matriz);

    return 0;
}