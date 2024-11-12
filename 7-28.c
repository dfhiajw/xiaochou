#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        a[i] = 1;
    }
    int count = 0;
    int remaining = N;
    int index = 0;
    while (remaining > 1)
    {
        if (a[index] == 1)
        {
            count++;
            if (count == 3)
            {
                a[index] = 0;
                remaining--;
                count = 0;
            }
        }
        index = (index + 1) % N;
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] == 1)
        {
            printf("%d", i + 1);
        }
    }

    return 0;
}