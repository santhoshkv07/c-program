#include <stdio.h>

int main(void) {
  char ch;
  scanf("%c",&ch);
  if(ch >= 'a' || ch >= 'A' && ch <= 'z'|| ch <= 'Z')
  {
  printf("Alphabet");
  }
  else
  {
    printf("no");
  }
  return 0;
}
