#include <stdio.h>

void ft_ft(int **********nbr){
    **********nbr = 42;
}

int main() {
    int nbr;
    int *nbr1 = &nbr;
    int **nbr2 = &nbr1;
    int ***nbr3 = &nbr2;
    int ****nbr4 = &nbr3;
    int *****nbr5 = &nbr4;
    int ******nbr6 = &nbr5;
    int *******nbr7 = &nbr6;
    int ********nbr8 = &nbr7;
    int *********nbr9 = &nbr8;

    ft_ft(&nbr9);
    printf("%d\n", nbr);
}
