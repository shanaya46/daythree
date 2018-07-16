#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
    int div;
    int mod;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;

}

int main() {
    int a = 20;
    int b = 5;

    ft_ultimate_div_mod(&a, &b);
    printf("Division: %d\n", a);
    printf("Remainder: %d\n", b);
}