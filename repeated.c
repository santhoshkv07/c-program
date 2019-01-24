#include <stdio.h>

int main()
{
    int n,i,j,count=0;
   int a[10],b[10];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      b[i]=0;
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               b[i]=a[i];
               count++;
           }
       }
   }
   /* for(i=0;i<count;i++)
   {
       printf("%d",b[i]);
   }*/
   for(i=0;i<count;i++)
   {
       if(b[i]>0)
       {
           printf("%d\n",b[i]);
           break;
       }
   }
    return 0;
}
