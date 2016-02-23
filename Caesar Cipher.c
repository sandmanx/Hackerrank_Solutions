#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, s, k, i;
    scanf("%d", &n);

    char code[n];
    
    scanf("%s %d", code, &k);
    
    int code1[n];
    for(i = 0; i < n; i++)
        code1[i] = (int)code[i];

    if (k >= 26)
        k = k % 26;
    else
        k = k;
    
    for (i = 0; i < n; i++){

        if ( code1[i] > 64 && code1[i] < 91){
            code1[i] = code1[i] + k;
            if( code1[i] > 90 ){
                while( code1[i] > 90)
                    code1[i] = code1[i] - 26;
            }
            else
                code1[i] = code1[i];
        }

        else if (code1[i] > 96 && code1[i] < 123){
            code1[i] = code1[i] + k;
            if (code1[i] > 122){
                while(code1[i] > 122)
                    code1[i] = code1[i] - 26;
                 }
            else
                code1[i] = code1[i];
        }

        else if (code1[i] != 0)
            code1[i] = code1[i];
    }


    for(i = 0; i < n; i++){
        code[i] = (char)code1[i];
        printf("%c", code[i]);
    }
    printf("\n");
    return 0;
}
