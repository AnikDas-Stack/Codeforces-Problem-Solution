#include <stdio.h>
int main()
{
    long long int n;
    int k;

    scanf("%lld %d", &n, &k);

    for(int i=1; i<=k; i++)
    {
        if(n%10 == 0)
            n = n/10;

        else
            n = n-1;

    }

    printf("%lld\n", n);
    return 0;
}
