#include <stdio.h>

int main(){

    float vet[10];
    int i,j;
    float aux;

    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%f", &vet[i]);
    }

    for(i=0;i<9;i++){

        for(j=i+1;j<10;j++){

            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");
    for(i=0;i<10;i++){
        printf("%.f ", vet[i]);
    }


    return 0;
}
