#include <math.h>
#include <stdio.h>

int countDigit(int n)
{ 
    return floor(log10(n)+1); 
} 
int main(void) 
{ 
    int n;
    scanf("%d",&n);
    printf("Number of digits : %d",countDigit(n)); 
    return 0; 
}
