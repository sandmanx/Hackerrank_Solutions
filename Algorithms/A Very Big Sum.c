#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);
    unsigned long long int sum[n], sum1=0;
    
    for (i=0; i<=n-1; i++)
    {
        scanf("%llu" , &sum[i]);
        sum1 = sum1 + sum[i];
    }
    printf("%llu", sum1);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
