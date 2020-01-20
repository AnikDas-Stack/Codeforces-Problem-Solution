#include <stdio.h>
int main()
{
    long long int n, one=0, zero=0;
    scanf("%lld",&n);

    char ara[n];
    scanf("%s", ara);
    for(int i=0; i<n; i++)
    {
        if(ara[i]=='1')
            one++;
        else
            zero++;
    }
    if(one>zero)
        printf("%lld\n", one-zero);
    else
        printf("%lld\n", zero-one);
    return 0;
}
