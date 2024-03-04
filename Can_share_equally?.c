#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%2!=0)
    {
        printf("NO");
    }
    else if(a==0&&b%2!=0)
    {
        printf("NO");
    }else
    {
        printf("YES");
    }
}