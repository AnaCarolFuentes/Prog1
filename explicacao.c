#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3

int main(){

    int matriz[M] [N] = {0};


    for(int i=0; i<M; i++){
       
        for(int j=0; j<N; j++){

            if(i==j){

               matriz[i][j] = 1;
            }
        }

    }
    printf("\nMATRIZ\n\n");

    for(int i=0; i<M; i++){

        for(int j=0; j<N; j++) {

           printf("%d ", matriz[i][j]);

        }
           printf("\n");
    }



  printf("\n");

}