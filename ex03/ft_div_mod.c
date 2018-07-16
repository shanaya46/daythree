#include <stdio.h>

void ft_ft(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a % b;
}

int main() {
    int a = 20;
    int b = 5;
    int div;
    int mod;
    ft_ft(a, b, &div, &mod);
    printf("Division: %d\n", div);
    printf("Remainder: %d\n", mod);
}