#include <stdio.h>
long long int count=1;
int main()
{
    long long int n, c, i, a, b;
    scanf("%I64d %I64d", &n, &c);

    long long int ara[n];
    for(i=0; i<n; i++)
        scanf("%I64d", &ara[i]);
    if(n==1)
    {
        printf("%I64d\n", count);
        return 0;
    }
    else
    {
        for(b=1; b<n; b++)
        {
            if(ara[b]-ara[b-1]<=c)
            {
                count++;
            }
            else
            {
                count=1;
            }
        }
        printf("%I64d\n", count);
    }
    return 0;
}
