#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int s=n*n;
    while(s)
{
    int i=s%10;
    sum+=i;
    s=s/10;
}
if(n==sum){
    printf("Neon Number");
}
else
{
    printf("Not Neon Number");
}
}