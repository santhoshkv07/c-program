#include <math.h>
#include <stdio.h>

int countDigit(int n)
{ 
    return floor(log10(n)+1); 
} 
int main(void) 
{ 
    int m;
    scanf("%d",&m);
    printf("Number of digits : %d",countDigit(m)); 
    return 0; 
}
