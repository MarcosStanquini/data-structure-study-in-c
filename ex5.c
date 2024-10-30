#include <stdio.h>

char escolhaBase()
{
    char escolha;
    printf("Escolha uma das opções: A, C, G, T\n");
    scanf(" %c", &escolha);
    return escolha;
}

int escolhaMaisAparece()
{
    int escolha;
    printf("Quantas vezes quer que a base apareça?\n");
    scanf("%d", &escolha);
    return escolha;
}

int percorreVetor(char vetor[], int tamanho, char escolha)
{
    int cont = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == escolha)
        {
            cont++;
        }
    }
    return cont;
}

void imprimeResultado(int qtd, int escolha_n, int dna_num)
{
    if (qtd >= escolha_n)
    {
        printf("O DNA %d aparece %d vezes\n", dna_num, qtd);
    }
    else
    {
        printf("O DNA %d: Não atende aos requisitos\n", dna_num);
    }
}

int main()
{
    char DNA1[] = {'A', 'T', 'G', 'C', 'A', 'A', 'C', 'T', 'A'};
    char DNA2[] = {'G', 'G', 'C', 'C', 'A', 'A', 'A', 'T', 'A', 'T'};
    char DNA3[] = {'C', 'A', 'A', 'T', 'G', 'C', 'C', 'A', 'C'};
    char DNA4[] = {'T', 'T', 'G', 'C', 'C', 'C', 'T', 'T', 'C'};

    char user_escolha_base = escolhaBase();
    int escolha_n = escolhaMaisAparece();

    int qtd1 = percorreVetor(DNA1, sizeof(DNA1) / sizeof(DNA1[0]), user_escolha_base);
    int qtd2 = percorreVetor(DNA2, sizeof(DNA2) / sizeof(DNA2[0]), user_escolha_base);
    int qtd3 = percorreVetor(DNA3, sizeof(DNA3) / sizeof(DNA3[0]), user_escolha_base);
    int qtd4 = percorreVetor(DNA4, sizeof(DNA4) / sizeof(DNA4[0]), user_escolha_base);

    imprimeResultado(qtd1, escolha_n, 1);
    imprimeResultado(qtd2, escolha_n, 2);
    imprimeResultado(qtd3, escolha_n, 3);
    imprimeResultado(qtd4, escolha_n, 4);

    return 0;
}
