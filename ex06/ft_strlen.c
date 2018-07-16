#include <stdio.h>

int ft_strlen(char *str){
  int a = 0;
  while (str[a] != '\0') {
        a++;
  }
  return a;
}

int main() {
   char str[64] = "Rish doesn't like Tom Brady"; 
   printf("%d\n", ft_strlen(str));
 }