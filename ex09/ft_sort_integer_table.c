#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void ft_sort_integer_table (int *tab, int size) {
int num = 0;
for (int i = size - 1; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
        if (tab[j] > tab [j + 1]) {
            num = tab[j];
            tab[j] = tab[j + 1];
            tab[j + 1] = num;
        }
    }
    printf("i = %d: ", i);
    for (int a = 0; a < size; a++){
        printf(" %d ", tab[a]);
    }
    printf("\n");

}

for (int a = 0; a < size; a++){
    printf("%d ", tab[a]);
}
printf("\n");

}

int main () {
int tab[10] = {37, 17, 90, 10, 6, 18, 3, 1, 20, 34};
ft_sort_integer_table (tab, 10);
}