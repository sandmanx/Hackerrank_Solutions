#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    long long int i,c,zero=0, neg=0, pos=0;
    float frac1=0, frac2=0, frac3=0;
    scanf("%lld" , &i);
    long long int mat[i];
    for (c=0; c<i; c++)
        scanf("%lld" ,&mat[c]);
    
    for (c=0; c<i; c++)
    {
        if (mat[c] == 0)
            zero ++;
        else if (mat[c] < 0)
            neg ++;
        else if (mat[c] > 0)
            pos ++;
    }
    frac1=(float)zero/i;
    frac2=(float)neg/i;
    frac3=(float)pos/i;
    printf("%f\n%f\n%f\n" ,frac3,frac2,frac1);
    
    return 0;
}
