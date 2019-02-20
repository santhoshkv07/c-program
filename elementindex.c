#include <stdio.h>

int main(void)
{ int i, j, a, n, number[30];
         scanf("%d", &n);
         for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
         for (i = 0; i < n; ++i)
            printf("%d %d\n", number[i],i);
  return 0;
}
