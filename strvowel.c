#include<stdio.h>
int main()
{
  char s[100];
  int count=0;
  scanf("%s",&a[100]);
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
    {
      count++;
    }
  }
  if(count>0)
  {
    printf("yes");
  }
  else{
    printf("no");
  }
  return 0;
}
