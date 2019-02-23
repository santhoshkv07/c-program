#include<stdio.h>
#include<string.h>
int main()
{
  int l,b,h,ar=0,vol=0;
  scanf("%d %d %d",&l,&b,&h);
  ar=2*((l*b)+(b*h)+(l*h));
  vol=l*b*h;
  printf("%d %d",ar,vol);
  return 0;
}
