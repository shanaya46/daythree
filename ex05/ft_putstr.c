#include <stdio.h>

void ft_putstr(char *str){
  printf("%s\n", str);
}

int main() {
   char str[5] = "ABCD"; 
   ft_putstr (str);
 }