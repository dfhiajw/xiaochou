#include <stdio.h>

int main()
{
    char ch;
    int length = 0;
    while (scanf("%c", &ch))
    {
        if (ch == ' ' || ch == '.')
        {
            printf("%d", length);
            length = 0;
        }
        else
        {
            length++;
        }
        if (ch == ' ')
        {
            printf(" ");
        }
        if (ch == '.')
        {
            break;
        }
    }
}