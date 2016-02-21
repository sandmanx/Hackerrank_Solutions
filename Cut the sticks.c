#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
        int  n, a;
        scanf("%d", &n);
        int arr[n], i, j, y, temp, less = 0, b = 0, c = 0;
        for (i = 0; i < n; i++)
                scanf("%d", &arr[i]);
        for(i = 0; i < n ; i++){
                for (y = 0; y < n - i - 1; y ++){
                        if (arr[y] > arr[y + 1]){
                                temp = arr[y];
                                arr[y] = arr[y + 1];
                                arr[y + 1] = temp;
                        }
                }
        }

        printf("%d\n",n);
        a = arr[0];
        for ( i = 0; i < n; ){
             for (j = i; j < n; j++) {
                arr[j] = arr[j] - a;
            }
            while (arr[i] == 0) {
                i++;
            }
            a = arr[i];
            if (n - i != 0)printf("%d\n",n-i);

        }
        return 0;
}
                         
