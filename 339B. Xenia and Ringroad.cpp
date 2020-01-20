#include <stdio.h>
int main()
{
    int n, m, l=1;
    scanf("%d %d", &n, &m);

    long long int res=0;

    for(int i=0; i<m; i++)
    {
        int k;
        scanf("%d", &k);

        if(k>=l)
            res+=k-l;
        else
            res+=n-(l-k);
        l=k;
    }
    printf("%lld\n", res);
    return 0;
}
