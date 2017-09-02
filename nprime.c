#include <stdio.h>
int main()
{
    double n, i, flag = 0;

    printf("Enter a  integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
 
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d the number is a prime number.",n);
    else
        printf("%d the number is not a prime number.",n);
    
    return 0;
}
