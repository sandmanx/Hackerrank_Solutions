#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
    int a,i,j,b,d,c;
    scanf("%d", &i);
    for (a=0; a<i; a++)
    {
        for (b=(i-1-a); b>0; b--)
            printf(" ");
        for (j=0; j<=a; j++)
            printf("#");
        printf("\n");
    }
    return 0;
}
