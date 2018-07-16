#include <stdio.h>

void ft_swap(int *a, int *b){
    int c;
     c = *a;
     *a = *b;
     *b = c;
}

int main() {
    int a = 4;
    int b = 6;

    ft_swap(&a, &b);
    printf("%d\n%d\n", a, b);
}