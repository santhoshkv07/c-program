#include <stdio.h>

int main(void) {
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a>b && a>c)
  {
    printf("%d is greater",a);
  }
  else if(b>a && b>c)
  {
    printf("%d is greater",b);
  }
  else
  {
    printf("%d is greater",c);
  }
  return 0;
}     
