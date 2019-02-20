#include <stdio.h>
#include<string.h>
int main(void)
{ 
  int count=0;
  char *a;
  scanf("%[^\n]s",a);
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i]==' ')
    {
      count=count+1;
      if(a[i+1]!=' ')
        count+=1;
    }
    else
     count+=0;  
  }
  printf("%d",count);
  return 0;
}
