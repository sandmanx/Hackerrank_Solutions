#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
        int t, n, i;
        scanf("%d %d", &n, &t);
        int width[n], a, b, j;
        for (j = 0; j < n; j++)
                scanf("%d" ,&width[j]);
        for( i = 0; i < t; i++){
                scanf("%d %d", &a, &b);
                int width_min = 4;
                for (j = a; j <= b; j++){
                        if (width[j] < width_min)
                                width_min = width[j];
                        else
                                width_min = width_min;
                }
                printf ("%d\n", width_min);
        }
        return 0;
}

