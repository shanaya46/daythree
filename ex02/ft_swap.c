#include <stdio.h>

void ft_ft(int *a, int *b){
    int c;
     c = *a;
     *a = *b;
     *b = c;
}

int main() {
    int a = 4;
    int b = 6;

    ft_ft(&a, &b);
    printf("%d\n%d\n", a, b);
}