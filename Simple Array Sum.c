#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long long int b=0;
    int a;
   // int num[a];
    int  i;
       
    scanf("%d", &a);
    int num[a];        
    for ( i=0 ; i<=(a-1) ; i++)
    {
            scanf("%d", &num[i]);
            b = b + num[i];
    }
    
    printf("%lld\n", b);
    return 0;
}
