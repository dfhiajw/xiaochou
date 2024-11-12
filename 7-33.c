#include <stdio.h>

int main()
{
    int a1,a2,b1,b2;
    scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
    int b11 = b1;
    int b22 = b2;
    while(b22!=0){
        int temp=b11%b22;
        b11=b22;
        b22 = temp;
    }
    a1 = a1 * b2 / b11;
    a2 = a2 * b1 / b11;
    b1 = (b1 * b2) / b11; 
    b2 = b1;
    int fenzi = a1 + a2;
    int fenmu=b1;
    int fenzi1=fenzi;
    int fenmu1=fenmu;
    while(fenmu1!=0){
        int temp=fenzi1%fenmu1;
        fenzi1=fenmu1;
        fenmu1=temp;
    }
    fenzi=fenzi/fenzi1;
    fenmu=fenmu/fenzi1;
    if(fenzi%fenmu==0){
        printf("%d", fenzi / fenmu);
    }else{
        printf("%d/%d", fenzi, fenmu);
    }
    return 0;
}