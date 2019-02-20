#include <stdio.h>

int main(void) {
int N,A,D;
int s1=0,s2=0,s3=0;
scanf("%d %d %d",&N,&A,&D);
if(N<=1000 && A<=1000 && D<=1000)
{
  if(N>=1 && A>=1 && D>=1)
  {
  s1=N*A;
  s2=N*D;
  s3=s1+s2;
  printf("%d",s3);
  }
}
  return 0;
}
