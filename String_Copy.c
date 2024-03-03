#include<stdio.h>
#include<string.h>
int main()
{
    char str1[500];
    scanf("%[^n]",str1);
    char str2[500];
    strcpy(str2,str1);
    printf("%s",str2);

}