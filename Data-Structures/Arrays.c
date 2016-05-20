#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i; 
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    for(i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
