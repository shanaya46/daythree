#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void ft_sort_integer_table (int *tab, int size) {
int num = 0;
for (int b = 1; b <= 2; b++){
for (int i = 0; i < (size); i++) {
    if (tab[i] > tab [i + 1]) {
    num = tab[i];
    tab[i] = tab[i + 1];
    tab[i + 1] = num;
    }
}
}

for (int a = 0; a < size; a++){
    printf("%d ", tab[a]);
}
   printf("\n");

}

int main () {
int tab[5] = {3, 7, 4, 10, 6};
ft_sort_integer_table (tab, 5);
}