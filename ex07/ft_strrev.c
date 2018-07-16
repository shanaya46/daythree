#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

char *ft_strrev(char *str){
  int len = strlen(str);
     printf("len = %d\n", len);

  char *str2 = (char*) malloc(len);
  for (int a = 0; a < len; a++){
     str2[a] = str[len - a - 1];
  }
  return str2;
  
}

int main() {
   char str[5] = "ABCD"; 
   printf("%s\n", ft_strrev (str));
 }