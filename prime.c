#include<stdio.h>
int main()
{
  int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n<=1000)
    {
     for(i = 2; i <= n/2; ++i)
     {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
     }
     if (n == 1) 
     {
      printf("1 is neither a prime nor a composite number.");
     }
     else 
     {
        if (flag == 0)
          printf("yes");
        else
          printf("no");
     }
    }
    else
      printf("number should below 1000");
 return 0;
}
