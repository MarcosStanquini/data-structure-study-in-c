#include <stdio.h>

int percorreVetor(char vetor[9])
{
    int cont = 0;
    for (int i = 0; i < 9; i++)
    {
        if (vetor[i] == 'A')
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    char DNA1[] = {'A', 'T', 'G', 'C', 'A', 'A', 'C', 'T', 'A'};
    char DNA2[] = {'G', 'G', 'C', 'C', 'A', 'A', 'A', 'T', 'A', 'T'};
    char DNA3[] = {'C', 'A', 'A', 'T', 'G', 'C', 'C', 'A', 'C'};
    char DNA4[] = {'T', 'T', 'G', 'C', 'C', 'C', 'T', 'T', 'C'};

    if (percorreVetor(DNA1) >= 4)
    {
        printf("DNA1 possui 4 ou mais adeninas\n");
    }
    if (percorreVetor(DNA2) >= 4)
    {
        printf("DNA2 possui 4 ou mais adeninas\n");
    }
    if (percorreVetor(DNA3) >= 4)
    {
        printf("DNA3 possui 4 ou mais adeninas\n");
    }
    if (percorreVetor(DNA4) >= 4)
    {
        printf("DNA4 possui 4 ou mais adeninas\n");
    }
}