#include <stdio.h>
int main()
{
    int n, j, s = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(j=1; j <= n; ++j)
    {
        s += j;
    }

    printf("S = %d",s);

    return 0;
}
