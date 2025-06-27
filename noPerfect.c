#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the no :- ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("Perfect No");
    else
        printf("\n not perect No");
    return 0;
}
find Amstrong Number;
paladrom number;