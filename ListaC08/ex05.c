#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main(int n){

    printf("%d\n", fibonacci(6));
    return 0;
}
