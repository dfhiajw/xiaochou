#include <stdio.h>

int main()
{
    double Open, Close, High, Low;
    scanf("%lf %lf %lf %lf", &Open, &Close, &High, &Low);
    if(Close < Open)
    {
        printf("BW-Solid");
    }
    else if (Close > Open)
    {
        printf("R-Hollow");
    }
    else
    {
        printf("R-Cross");
    }
    if (Low < Open && Low < Close && High <= Open && High <= Close)
    {
        printf(" with Low Shadow");
    }
    else if (Low >= Open && Low >= Close && High > Open && High > Close)
    {
        printf(" with Upper Shadow");
    }
    else if (Low < Open && Low < Close && High > Open && High > Close)
    {
        printf( " with Lower Shadow and Upper Shadow");
    }
    return 0;
}