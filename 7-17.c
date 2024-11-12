#include <stdio.h>
#include <math.h>

int main()
{
    int N,U,D;
    scanf("%d %d %d",&N,&U,&D);
    if(N<U){
        printf("1");
    }    
    int time1=0;
    int time2=0;
    int height=0;
    while(1){
        time1++;
        height+=U;
        if(height>=N){
            printf("%d",time1+time2);
            break;
        }
        time2++;
        height-=D;
        
    }
    return 0;
}