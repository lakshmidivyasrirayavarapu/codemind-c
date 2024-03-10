#include<stdio.h>
int main()
{
    float i,n;
    float ans=0;
    scanf("%f",&n);
    for( i=1;i<=n;i++)
    {
        ans+=(1/i);
    }
    printf("%.2f",ans);
}