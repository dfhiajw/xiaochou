#include <stdio.h>
#include <math.h>

int main()
{
    double zhi;
    scanf("%lf", &zhi);
    double x1 = 1.0;
    double x2 = 1.0;
    double x3 = 1.0;
    double x4 = 1.0;
    double sum = 0.0;
    int cnt = 0;
    while (fabs(x3 / x4) >= zhi)
    {
        sum += x1 / x2;
        cnt++;
        x3 = x1;
        x4 = x2;
        x1 *= cnt;
        x2 *= (2 * cnt + 1);
    }
    printf("%.6f", 2*sum);
    return 0;
}