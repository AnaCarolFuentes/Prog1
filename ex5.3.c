#include <stdlib.h>
#include <stdio.h>

#define M 3 
#define N 4

/*Escreva um programa que preencha um array de dimensões 3x4 de
inteiros com valores fornecidos pelo usuário. Em seguida, o programa deve ler o
valor de um número inteiro. Armazene em um segundo array de dimensões 3x4 a
multiplicação do valor fornecido pelas posições do array preenchido inicialmente.
No final, o programa*/


int main(){

    int matriz[M][N] = {0};
    int num = 0;
    int arrayMult [M][N] = {0};

    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMultiplicar por: ");
    scanf("%d", &num);

    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++){
                arrayMult[i][j] = matriz[i][j] * num;
        }
    }
    for(int j=0; j<N; j++){

        int i=0;

            if((arrayMult[i][j] > -9) && (arrayMult[i][j]< 9)){
                printf("00%d ", arrayMult[i][j]);

            }
            else{
                printf("0%d ", arrayMult[i][j]);
            }

    }
    printf("\n");
    for(int j=0; j<N; j++){
        
        int i=1;

            if((arrayMult[i][j] > -9) && (arrayMult[i][j]< 9)){
                printf("00%d ", arrayMult[i][j]);

            }
            else{
                printf("0%d ", arrayMult[i][j]);
            }

    }
    printf("\n");
    for(int j=0; j<N; j++){
        
        int i=2;

            if((arrayMult[i][j] > -9) && (arrayMult[i][j]< 9)){
                printf("00%d ", arrayMult[i][j]);

            }
            else{
                printf("0%d ", arrayMult[i][j]);
            }

    }
    printf("\n");


}