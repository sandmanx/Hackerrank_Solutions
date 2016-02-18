#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
        short int t, i, g, j;
        scanf ("%ul", &t);

        for (i = 0; i < t; i ++) {
                scanf ("%ul", &g);
                
                long long int height = 1;
                for (j = 1; j <= g; j ++) {
                        
                        if ( j == 1)
                                height = 2;
                        else if ( (j % 2) == 0 )
                                height = height + 1;
                        else if ( (j % 2) != 0 || j == 1)
                                height = 2*height;
                        
                } printf ("%lld\n", height);
        }

        return 0;
}
