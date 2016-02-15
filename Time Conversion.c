#include<stdio.h>
#include <stdlib.h>
int main() {
        int i, j = 0, a;
        char time[8];
        scanf ("%d%s", &a, time);

        if (time[6] == 'P' && a != 12)
                a += 12;
        else if (time[6] == 'P' && a == 12)
                a = a;
        else if (time[6] == 'A' && a == 12)
                a = 0;

        if (a < 10)
                printf ("%d%d", j, a);

        else
                printf ("%d", a);

        for (i = 0; i < 6; i++)
                printf ("%c", time[i]);

        printf ("\n");
        return 0;
}
