#include <stdio.h>

void ft_ft(int *nbr){
    *nbr = 42;
}

void ft_ft2(int nbr){
    nbr = 42;
    printf("inside ft %d\n", nbr);
}

int main() {
    int nbr;
    ft_ft2(nbr);
    printf("%d\n", nbr);
    ft_ft(&nbr);
    printf("%d\n", nbr);

}