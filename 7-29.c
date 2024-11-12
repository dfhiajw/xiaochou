#include <stdio.h>

int main()
{
    char a[81];
    char b[81];
    char ch;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < 80; i++)
    {
        scanf("%c", &ch);
        if (ch != '\n')
        {
            a[i] = ch;
            cnt1++;
        }
        else if (ch == '\n')
        {
            break;
        }
    }
    for (int i = 0; i < 80; i++)
    {
        scanf("%c", &ch);
        if (ch != '\n')
        {
            a[i] = ch;
            cnt2++;
        }
        else if (ch == '\n')
        {
            break;
        }
    }
    int judge = 0;
    for (int i = 0; i <= cnt1 - cnt2; i++)
    {
        for (int j = 0; j < cnt2; j++)
        {
            if (a[i + j] != b[j])
            {
                judge = 1;
            }
        }
        if (judge == 1)
        {
            for (int j = 0; j < cnt2; j++)
            {
                a[i + j] = '\n';
            }
        }
    }

    for(int i=0;i<cnt1;i++){
        if(a[i]!='\n'){
            printf("%c", a[i]);
        }
    }
    
    return 0;
}