#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
        int t, n, k, j, i;
        scanf ("%d" ,&t);

        for (j = 0; j < t; j++) {
                scanf ("%d %d", &n, &k);

                int time[n], count = 0, useless = 0;

                for (i = 0; i < n; i++)
                        scanf ("%d", &time[i]);

                for (i = 0; i < n; i++) {
                        if ( time[i] > 0)
                                count++;
                        else if (time[i] <= 0)
                                useless++;
                } if (useless >= k)
                        printf("NO\n");
                else
                        printf("YES\n");
               
        }

        return 0;
}
