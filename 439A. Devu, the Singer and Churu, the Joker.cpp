#include <stdio.h>
int main()
{
    int n, d, sum=0, rest;
    scanf("%d %d", &n, &d);
    int ara[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
        sum+=ara[i];
    }
    sum+=(n-1)*10;
    rest=(n-1)*10;

    if(sum>d)
    {
        printf("-1\n");
        return 0;
    }
    else
    {
        rest+=d-sum;
        printf("%d\n", rest/5);
    }
    return 0;
}
