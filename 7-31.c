#include <stdio.h>
#include <string.h>

int main()
{
    int cnt=0;
    char a[110];
    char ch;
    int i = 1;
    while (ch = getchar(),ch!='\n'){
        a[i] = ch;
        i++;
        cnt++;
    }
    
    int N;
    scanf("%d", &N);
    if(N>cnt && N%cnt!=0){
        N %= cnt;
    }else if(N%cnt==0){
        N = cnt;
    }
    char b[N + 2];
    for (int i = 1;i<=N;i++){
        b[i]=a[i];
    }
    for (int i = 1; i <= cnt - N; i++)
    {
       a[i]=a[i + N];
    }
    for (int i = cnt - N + 1,j=1; i <= cnt;i++,j++){
        a[i]=b[j];
    }
    for(int i=1;i<=cnt;i++){
        printf("%c", a[i]);
    }
    return 0;
}