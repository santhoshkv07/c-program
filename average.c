#include <stdio.h>

int main(void)
{ int i, j, a, n, num[30];
         scanf("%d", &n);
         for (i = 0; i < n; ++i)
            scanf("%d", &num[i]);
         for (i = 0; i < n; ++i) 
        {
             for (j = i + 1; j < n; ++j)
            {
                 if (num[i] > num[j])
                {
                    a =  num[i];
                    num[i] = num[j];
                    num[j] = a;
                 }
             }
         }
         printf("%d",num[i/2]);
  return 0;
}
