#include <stdio.h>
int main()
{
    long long int n, res1, res2;

    scanf("%I64d", &n);

    if(n>=0)
        printf("%I64d\n", n);
    else
    {
        res1 = n/10;
        res2 = n/100 * 10+n%10;

        if(res1>=res2)
            printf("%I64d\n", res1);
        else
            printf("%I64d\n", res2);
    }
    return 0;
}
