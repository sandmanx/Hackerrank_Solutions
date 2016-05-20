#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
        int t, g, i;
        scanf("%d", &t);
        for (g = 0; g < t; g++){

                long long int n, m;

                scanf("%lld", &n);
                m = n;
                int arr[100];
                i = 0;
                while (n != 0) {
                            arr[i] = n % 10;
                            n = n / 10;
                            i++;
                }

                int a = 0, b = 0, j, c = 0;
                for (j = 0; j < i; j++){
                        if ( arr[j] == 0)
                                c++;
                        else if (m % arr[j] == 0 && arr[j] != 0)
                                a++;
                        else
                                b++;
                }
                printf("%d\n", a);
        }
        return 0;
}
