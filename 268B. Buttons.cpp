#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int result=(n-1)*n*(n+1)/6+n;
    printf("%lld\n", result);
    return 0;
}
