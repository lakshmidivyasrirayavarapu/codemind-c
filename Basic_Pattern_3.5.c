#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        char ch='A';
        for(int j=0;j<r-i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("
");
    }
}