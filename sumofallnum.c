#include<stdio.h>
#include<string.h>
int main()
{
 int n,x[100],sum=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
   scanf("%d",&x[i]);
 }
 for(int i=0;i<n;i++)
 {
   sum+=x[i];
 }
 printf("%d",sum);
  return 0;
}
