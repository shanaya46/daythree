#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a % b;
}

int main() {
    int a = 20;
    int b = 5;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("Division: %d\n", div);
    printf("Remainder: %d\n", mod);
}