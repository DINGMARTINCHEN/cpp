#include<stdio.h>
#include<string.h>
#include<iostream>
int main(void)
{
    char color[1001][25];
    int max, count[1001], i, j, n, k;
    while (scanf("%d", &n) && n != 0)
    {
        for (i = 0; i < n; i++)
            scanf("%s", &color[i]);
        for (i = 0; i < n; i++)
            count[i] = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (strcmp(color[i], color[j]) == 0)
                    count[i]++;
        max = 0, k = 0;
        for (i = 0; i < n; i++)
            if (max < count[i])
            {
                max = count[i];
                k = i;
            }
        printf("%s\n", color[k]);
    }
    return   0;
}

