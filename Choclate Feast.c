#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
        int t, i;
        scanf("%d", &t);
        for (i = 0; i < t; i++){
                long long int money, price, m;
                scanf ("%lld %lld %lld", &money, &price, &m);
                long long int totalwrappers = 0, total = 0, wrappersremaining = 0;
                totalwrappers = money/price;
                wrappersremaining = totalwrappers;
                total = totalwrappers;

                while(wrappersremaining >= m ){
                        total = total + wrappersremaining/m;
                        wrappersremaining = wrappersremaining%m + wrappersremaining/m;
                        }
                printf("%lld\n", total);

        }
        return 0;
}
