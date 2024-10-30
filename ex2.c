#include <stdio.h>

#define TAMANHO 3

void preenchersMatriz(double matriz[TAMANHO][TAMANHO]){
    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
                 printf("Preencha a matriz: Linha %d, coluna: %d\n", i+1, j+1);
                 scanf("%lf", &matriz[i][j]);
        }
    }
}

int calculaTracoMatriz(double matriz[TAMANHO][TAMANHO]){
        double soma = 0;
        for(int i = 0; i < TAMANHO; i++){
                 soma = soma + matriz[i][i];
                
        }
        return soma;

}

int main(){
    double soma = 0;
    double matriz[TAMANHO][TAMANHO];
    preenchersMatriz(matriz);
    soma = calculaTracoMatriz(matriz);
    printf("A soma da matriz é %lf", soma);

    return 0;

}