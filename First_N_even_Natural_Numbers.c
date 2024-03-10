#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2*n;i>=2;i--){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}