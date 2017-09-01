#include <stdio.h>
int main()
{
    double no;

    printf("Enter a no: ");
    scanf("%lf", &no);
    if (number < 0.0)
        printf("You entered a negative number.");
    else if ( number > 0.0)
        printf("You entered a positive number.");
    else
        printf("You entered 0.");
    return 0;
}
