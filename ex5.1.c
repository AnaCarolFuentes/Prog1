#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 2

/*Exercício 5.1: Escreva um programa que preencha um array de dimensões 3x2 de
inteiros com valores fornecidos pelo usuário e o exiba na forma de uma matriz.*/

int main(){
    int matriz[M] [N] = {0};

    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++){

            printf("array[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        
        }
    }
    printf("\n");

    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++){
            
            printf("00%d ", matriz[i][j]); 

        }
        printf("\n");
    }
    printf("\n");
}