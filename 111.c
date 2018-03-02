#include<stdio.h>
int main()
{
    int a;
    int b=0;
    printf("enter the value");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        ++b;
    }
    printf("%d",b);
    }
    
