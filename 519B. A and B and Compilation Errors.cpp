#include <stdio.h>
int main()
{
    long long int n, sum1=0, sum2=0, sum3=0;
    scanf("%lld", &n);
    long long int ara1[n], ara2[n-1], ara3[n-2];

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &ara1[i]);
        sum1+=ara1[i];
    }
    for(int i=0; i<n-1; i++)
    {
        scanf("%lld", &ara2[i]);
        sum2+=ara2[i];
    }
    for(int i=0; i<n-2; i++)
    {
        scanf("%lld", &ara3[i]);
        sum3+=ara3[i];
    }
    printf("%lld\n%lld\n", sum1-sum2, sum2-sum3);
    return 0;

}
