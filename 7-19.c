#include <stdio.h>

int main()
{
    int y, f;
    int n = 9702;
//    scanf("%d", &n);
    int judge = 0;
    for (f = 99; f < 100; f++)
    {
        for (y = 0; y < 100; y++)
        {
            if (200 * y + 2 * f + n == 100 * f + y)
            {
                printf("%d.%02d", y, f);
                judge = 1;
                break;
            }
        }
    }
    if (judge == 0)
    {
        printf("No Solution");
    }
    return 0;
}