#include <stdio.h>

int main(){
    int x;
    printf("Digite um numero entre 1 e 8: ");
    scanf("%i",&x);

    for(int i =0; i<x; i++){

        for(int k =x;k>i;k--){
            printf(" ");
        }
        for(int j = 0;j<=i;j++){
            printf("#");
        }

        printf("\n");
    }

}