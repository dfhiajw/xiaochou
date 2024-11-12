#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int km1 = 0;
    int km2 = 0;
    int t = 0;
    while (t < T)
    {
        km1 += 3;
        km2 += 9;
        t++;
        if (t % 10 == 0)
        {
            if (km1 < km2)
            {
                if(t+30>=T){
                    km1 += (T - t) * 3;
                    break;
                }else{
                    km1 += 90;
                    t += 30;
                }
            }
        }
        
    }
    if (km1 > km2)
    {
        printf("@_@ %d", km1);
    }
    else if (km1 == km2)
    {
        printf("-_- %d", km1);
    }
    else
    {
        printf("^_^ %d", km2);
    }
    return 0;
}
