#include <stdio.h>
int main()
{
    long long int n, x, count=0;
    scanf("%I64d %I64d", &n, &x);

    for(int i=1; i<=n; i++)
    {
        if(x%i==0 && x/i<=n)
            count++;
    }
    printf("%I64d\n", count);
    return 0;
}
