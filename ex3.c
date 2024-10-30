#include <stdio.h>

#define TAMANHO 5


void preencherMatriz(double matriz[TAMANHO][TAMANHO]){
    int ln, col;
    for(ln = 0; ln < TAMANHO; ln++){
        for(col = 0; col < TAMANHO; col++){
            printf("Preenche a matriz, linha: %d, coluna: %d", ln+1, col+1);
            scanf("%lf", &matriz[ln][col]);
        }
    }
    
}

void calculaSomaMatriz(double matriz[TAMANHO][TAMANHO], int soma[TAMANHO]){
    int ln, col;
    for(ln = 0; ln < TAMANHO; ln++){
        for(col = 0; col < TAMANHO; col++){
            soma[ln] += matriz[ln][col];
            
        }
    } 
}

void imprimirResultado(int soma[TAMANHO]){
    for(int i =0; i < TAMANHO; i++){
        printf("\nSoma da linha %d é: %d\n", i+1, soma[i]);
    }
}



int main(){
    double matriz[TAMANHO][TAMANHO] = {0};
    int soma[TAMANHO] = {0};

    preencherMatriz(matriz);
    calculaSomaMatriz(matriz, soma);
    imprimirResultado(soma);

}