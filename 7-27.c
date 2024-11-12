#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int *a = (int *)malloc(N * sizeof(int));
    memset(a, 0, N*sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= K; i++)
    {
        for (int j = 0; j < N-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cnt++;
        printf("%d", a[i]);
        if (cnt < N)
        {
            printf(" ");
        }
    }
    free(a);
    return 0;
}