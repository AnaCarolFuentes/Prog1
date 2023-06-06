#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3

/*Exercício 5.2: Escreva um programa que preencha dois arrays de dimensões 3x3 de
inteiros com valores fornecidos pelo usuário e armazene a soma desses dois arrays
em um terceiro array de dimensões 3x3. No final, o programa deve exibir os três arrays
no formado apresentado a seguir.*/

int main(){

    int matriz1[M][N] = {0};
    int matriz2[M][N] = {0};
    int matrizSoma[M][N] = {0};

    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++){
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++){
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++){
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j]; 

        }

    }
    printf("\narray1       array2       arraySoma:\n");
     
    for(int j=0; j<N; j++){

        int i = 0;
        printf("0%d ", matriz1[i][j]);
    }
    printf("   ");
    for(int j=0; j<N; j++){

        int i = 0;
        printf("0%d ", matriz2[i][j]);
    }
    printf("   ");
    for(int j=0; j<N; j++){

        int i = 0;
        printf("0%d ", matrizSoma[i][j]);
    }
    printf("\n");

    for(int j=0; j<N; j++){

        int i = 1;
        printf("0%d ", matriz1[i][j]);
    }
    printf(" + ");
    for(int j=0; j<N; j++){

        int i = 1;
        printf("0%d ", matriz2[i][j]);
    }
    printf(" = ");
    for(int j=0; j<N; j++){

        int i = 1;
        printf("0%d ", matrizSoma[i][j]);
    }
    printf("\n");

    for(int j=0; j<N; j++){

        int i = 2;
        printf("0%d ", matriz1[i][j]);
    }
    printf("   ");
    for(int j=0; j<N; j++){

        int i = 2;
        printf("0%d ", matriz2[i][j]);
    }
    printf("   ");
    for(int j=0; j<N; j++){

        int i = 2;
        printf("0%d ", matrizSoma[i][j]);
    }

    printf("\n\n");
    
}