#include <stdio.h>

int main(){

    int mat[4][4];
    int i, j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            mat[i][j] = i*j;
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
