#include <stdio.h>

int main(){

    int n, i;

    printf("Digite um numero inteiro impar: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i%2 != 0){
            printf("%d ", i);
        }
    }
    return 0;
}
