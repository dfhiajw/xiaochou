#include <stdio.h>
#include <string.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    char a[120][11] = {'0'};
    for (int i = 1; i <= N; i++)
    {
        scanf("%s", a[i]);
    }
    for(int i=0;i<K;i++){
        for(int j=1;j<N;j++){
            if(strlen(a[j])>strlen(a[j+1])){
                char temp[11];
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
    for (int i = 1;i<=N;i++){
        printf("%s\n", a[i]);
    }
    return 0;
}