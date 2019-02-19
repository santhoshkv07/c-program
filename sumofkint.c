#include<stdio.h>
int main()
{
  int m,k,a[10],sum=0;
  scanf("%d %d",&m,&k);
  for(int i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<k;i++)
  {
    sum=sum+a[i];
  }
  printf("%d",sum);
}
